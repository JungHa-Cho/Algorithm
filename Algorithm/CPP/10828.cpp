#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

typedef struct NODE
{
    NODE *previous;
    int integer;
}NODE;

class Stack
{
    private:
    int _size;
    NODE *_top;

    public:   
    Stack() 
    {
       _size = 0;
    }

    void push(int integer)
    {
        NODE *node = (NODE *)malloc(sizeof(NODE));
        node->integer = integer;
        node->previous = NULL;
        if (_size == 0) {
            _top = node;
            _size++;
        } else {
            node->previous = _top;
            _top = node;
            _size++;
        }
    }

    void pop() {
        if (_size == 0) {
            printf("%d\n", -1);
        } else {
            printf("%d\n", _top->integer);
            _top = _top->previous;
            _size--;
        }
    }

    void top() {
        if (_size == 0) {
            printf("%d\n", -1);
        } else {
            printf("%d\n", _top->integer);
        }
    }

    void empty() {
        if (_size == 0) {
            printf("%d\n", 1);
        } else {
            printf("%d\n", 0);
        }
    }

    void size() {
        printf("%d\n", _size);
    }
};

int main(void)
{
    int t, i;
    string command;
    Stack stack;
    
    cin >> t;

    while (t--) {
        cin >> command;
        if (command.compare("push") == 0) {
            cin >> i;
            stack.push(i);
        } else if (command.compare("pop") == 0) {
            stack.pop();
        } else if (command.compare("top") == 0) {
            stack.top();
        } else if (command.compare("size") == 0) {
            stack.size();
        } else if (command.compare("empty") == 0) {
            stack.empty();
        }
    }
    return 0;
}