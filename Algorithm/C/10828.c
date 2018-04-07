#include <stdio.h.>
#include <string.h>

int stack[10001] = {0, };
int size = 0;

void push(int integer)
{  
        size++;
        stack[size] = integer;
}

int pop()
{
    if (size == 0) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", stack[size]);
        size--;
    }
}

void isize()
{
    printf("%d\n", size);
}

void empty()
{
    if (size == 0) 
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }
}

void top()
{
    if (size == 0) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", stack[size]);
    }
}

int main(void)
{
    int N, integer; // 1 <= N <= 10,000
    char cpush[] = "push";
    char cpop[] = "pop";
    char csize[] = "size";
    char cempty[] = "empty";
    char ctop[] = "top";

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        char order[12];
        scanf("%s", order);

        if (!strcmp(cpush, order))
        {
            scanf("%d", &integer);
            push(integer);
        } 
        if (!strcmp(cpop, order))
        {
            pop();
        }
        if (!strcmp(csize, order))
        {
            isize();
        }
        if (!strcmp(cempty, order))
        {
            empty();
        }
        if (!strcmp(ctop, order))
        {
            top();
        }
    }
}