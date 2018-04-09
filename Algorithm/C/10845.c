#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE
{
    struct NODE * next;
    int number;
}NODE;

typedef struct QUEUE
{
    NODE * front;
    NODE * rear;
    int size;
}QUEUE;

void push(QUEUE * que, int input)
{
    NODE * node = (NODE*)malloc(sizeof(NODE));
    node->next = NULL;
    node->number = input;
    if (que->size == 0)
    {
        que->front = node;
        que->rear = node;
        que->size += 1;
    }
    else
    {
        node->next = que->rear;
        que->rear = node;
        que->size += 1;
    }
}

void pop(QUEUE * que)
{
    if (que->size == 0)
    {
        printf("%d\n", -1);
    }
    else
    {
        printf("%d\n", que->front->number);

        if (que->front == que->rear)
        {
            que->front = NULL;
            que->rear = NULL;
            que->size = 0;
        }
        else
        {
            NODE *node = que->rear;
            do
            {
                if (node->next == que->front)
                {
                    que->front = node;
                    que->size -= 1;
                }
                else
                {
                    node = node->next;
                }
            } while (node->next != NULL);
        }
    }
}

void size(QUEUE *que)
{
    printf("%d\n", que->size);
}

void empty(QUEUE *que)
{
    if (que->size == 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }
}

void front(QUEUE * que)
{
    if (que->front != NULL)
    {
        printf("%d\n", que->front->number);
    }
    else
    {
        printf("%d\n", -1);
    }
}

void back(QUEUE *que)
{
    if (que->rear != NULL)
    {
        printf("%d\n", que->rear->number);
    }
    else
    {
        printf("%d\n", -1);
    }
}

int main(void)
{
    QUEUE * queue = (QUEUE*)malloc(sizeof(QUEUE));
    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;

    int N, input = 0;
    char command[6];
    scanf("%d", &N);

    while (N--)
    {
        scanf("%s", command);

        if (strcmp(command, "push") == 0)   
        {
            scanf("%d", &input);
            push(queue, input);
        }
        else if (strcmp(command, "pop") == 0)
        {
            pop(queue);
        }
        else if (strcmp(command, "front") == 0)
        {
            front(queue);
        }
        else if (strcmp(command, "back") == 0)
        {
            back(queue);
        }
        else if (strcmp(command, "size") == 0)
        {
            size(queue);
        }
        else if (strcmp(command, "empty") == 0)
        {
            empty(queue);
        }
    }

    return 0;
}