#include <stdio.h>
#include <string.h>

int deck[20001] = {0, };
int size = 0;
int front = 0;
int tail = 0;

void push_front(int integer)
{ 
    if (size == 0)
    {
        size++;
        front = size;
        tail = size;
        deck[size] = integer;
    }
    else
    {
        int index = size;
        int tail = size;
        for (int i = size; i > 0; i--)
        {
            deck[i + 1] = deck[i];
        }
        deck[front] = integer;
    }
}

void push_back(int integer)
{  
}

int pop_front()
{
}
int pop_back()
{
}

void isize()
{
}

void empty()
{
}

void front()
{
}
void back()
{
}

int main(void)
{
    int N, integer; // 1 <= N <= 10,000
    char cpush_front[] = "push_front";
    char cpush_back[] = "push_back";
    char cpop_front[] = "pop_front";
    char cpop_back[] = "pop_back";
    char csize[] = "size";
    char cempty[] = "empty";
    char cfront[] = "front";
    char cback[] = "back";

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        char order[12];
        scanf("%s", order);

        if (!strcmp(cpush_front, order))
        {
            scanf("%d", &integer);
            push_front(integer);
        } 
        if (!strcmp(cpush_back, order))
        {
            scanf("%d", &integer);
            push_back(integer);
        } 
        if (!strcmp(cpop_front, order))
        {
            pop_front();
        }
        if (!strcmp(cpop_back, order))
        {
            pop_back();
        }
        if (!strcmp(csize, order))
        {
            isize();
        }
        if (!strcmp(cempty, order))
        {
            empty();
        }
        if (!strcmp(cfront, order))
        {
            front();
        }
        if (!strcmp(cback, order))
        {
            back();
        }
    }

    return 0;
}