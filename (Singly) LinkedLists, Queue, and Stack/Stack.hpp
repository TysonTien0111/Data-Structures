#ifndef STACK_H
#define STACK_H

#include "SinglyLinkedLists.hpp"

class Stack: public SinglyLinkedLists {
    public:
        Stack();
        void push(int x);
        void pop();
        int peek();
        void display();
        ~Stack();
    private:
        SinglyLinkedLists linked_list;
};

#endif // STACK_H
