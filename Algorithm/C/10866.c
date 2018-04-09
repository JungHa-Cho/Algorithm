#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE 
{
    struct NODE * previous;
    struct NODE * next;
    int variable;
}NODE;

typedef struct DEQUE 
{
    NODE * front;
    NODE * rear;
    int size;
}DEQUE;

void push_front(DEQUE *deq, int num)
{
    printf("push_front!! %d, %d\n", deq->size, num);
    NODE * node = (NODE*)malloc(sizeof(NODE));
    node->next = NULL;
    node->previous = NULL;
    node->variable = num;
    if (deq->size == 0)
    {
        deq->front = node;
        deq->rear = node;
        deq->size += 1;
    }
    else
    {
        node->previous = deq->front;
        deq->front->next = node;
        deq->front = node;
        deq->size += 1;
    }
}

void push_back(DEQUE *deque, int num)
{
    NODE *node = (NODE*)malloc(sizeof(NODE));
    if (deque->size == 0)
    {
        node->next = NULL;
        node->previous = NULL;
        node->variable = num;
        deque->front = node;
        deque->rear = node;
        deque->size = 0;
    }
    else
    {
        node->next = deque->rear;
        node->previous = NULL;
        node->variable = num;
        deque->rear->previous = node;
        deque->rear = node;
        deque->size += 1;
    }
}

void pop_front(DEQUE *deque)
{
    if (deque->size == 0)
    {
        printf("%d\n", -1);
    }
    else
    {
        printf("%d\n", deque->front->variable);
    }
}

void pop_back()
{

}

int main(void)
{
    DEQUE *deq = (DEQUE*)malloc(sizeof(DEQUE));
    deq->front = NULL;
    deq->rear = NULL;
    deq->size = 0;

    int test_case, NUMBER = 0;
    char command[6];

    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%s", command);
        if (strcmp(command, "push_front") == 0)
        {
            scanf("%d", &NUMBER);
            push_front(deq, NUMBER);
        }
        else if (strcmp(command, "push_back") == 0)
        {
            scanf("%d", &NUMBER);
            push_back(deq, NUMBER);
        }
        else if (strcmp(command, "pop_front") == 0)
        {
            pop_front(deq);
        }
        else if (strcmp(command, "pop_back") == 0)
        {
            pop_back();
        }
    }

    return 1;
}