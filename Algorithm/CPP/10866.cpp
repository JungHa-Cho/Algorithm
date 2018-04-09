#include <iostream>
#include <string>

using namespace std;

typedef struct NODE {
    struct NODE * privious;
    int variable;
    struct NODE * next;
} DEQUE_NODE;

typedef struct DEQUE {
    DEQUE_NODE * front;
    DEQUE_NODE * rear;
    int size = 0;
} DEQUE;

void push_front(DEQUE * var, int num)
{
    DEQUE_NODE * node = (DEQUE_NODE*)malloc(sizeof(DEQUE_NODE));
    node->variable = num;
    node->next = NULL;
    node->privious = NULL;

    if (var->dq == NULL)
    {
        var->dq = node;
        var->front = node;
        var->tail = node;
        var->size += 1;
    }
    else
    {
        var->dq->privious = 
        node->next = var->front;
        var->front = node;
        var->size += 1;
    }
}

int main(void)
{
    DEQUE * DQ = (DEQUE *)malloc(sizeof(DEQUE));
    DQ->dq = NULL;
    DQ->front = NULL;
    DQ->tail = NULL;
    DQ->size = 0;

    int N, NUMBER = 0;
    string command;

    cin >> N;
    while (N--)
    {
        cin >> command;

        if (command.compare("push_front") == 0)
        {
            cin >> NUMBER;
            push_front(DQ, number);
        }
    }

    return 1;
}