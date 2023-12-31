#ifndef QUEUE_H
#define QUEUE_H

#include "SinglyLinkedLists.hpp"

class Queue: public SinglyLinkedLists {
    public:
        Queue();
        void enqueue(int x);
        void dequeue();
        Node* get_front_element();
        void is_queue_empty();
        int get_queue_length();
        ~Queue();
    private:
        SinglyLinkedLists linked_list; 
};

#endif // QUEUE_H
