#include "SinglyLinkedLists.hpp" 
#include "Queue.hpp"

#include <iostream>

using namespace std;

Queue::Queue() {
}

void Queue::enqueue(int x) {
    linked_list.append(x);
}

void Queue::dequeue() {
    if (linked_list.get_length()) {
        cout << "Can't dequeue, queue is empty." << endl;
    }

    cout << linked_list.get_head()->get_data() << " has been removed from the queue." << endl; 
    linked_list.delete_first_node();
}

Node* Queue::get_front_element() {
    return linked_list.get_head();
}

void Queue::is_queue_empty() {
    if (linked_list.get_length() == 0) {
        cout << "Queue is empty." << endl; 
    } else {
        cout << "Queue has " << linked_list.get_length() << " elements in it." << endl;
    }
}

int Queue::get_queue_length() {
    return linked_list.get_length();
}

Queue::~Queue() {
}
