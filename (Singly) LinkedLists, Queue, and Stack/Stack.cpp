#include "SinglyLinkedLists.hpp"
#include "Stack.hpp"

#include <iostream>

using namespace std;

Stack::Stack() {
}

void Stack::push(int x) {
    linked_list.prepend(x);
}
    
void Stack::pop() {
    if (linked_list.get_length() == 0) {
        cout << "Stack is empty, can't pop." << endl;
    } else {
        cout << linked_list.get_head()->get_data() << " has been removed from the stack." << endl; 
        linked_list.delete_first_node();
    }
}

int Stack::peek() {
    if (linked_list.get_length() == 0) {
        cout << "Stack is empty. ";
        return -1;
        cout << endl;
    }
    return linked_list.get_head()->get_data();
}

void Stack::display() {
    Node* current_node = linked_list.get_head();

    for (int i = 0; i < linked_list.get_length(); i++) {
        cout << current_node->get_data() << "->"; 
        current_node = current_node->get_next_pointer();
    }

    cout << "NULL" << endl;
}

Stack::~Stack() {
}
