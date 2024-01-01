#include "SinglyLinkedLists.hpp"
#include "Node.hpp"

#include <iostream>

using namespace std;

SinglyLinkedLists::SinglyLinkedLists() {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

void SinglyLinkedLists::set_head(Node* x) {
    head = x;
}

void SinglyLinkedLists::set_tail(Node* y) {
    tail = y;
}

void SinglyLinkedLists::set_length(int z) {
    length = z;
}

Node* SinglyLinkedLists::get_head() {
    return head;
}

Node* SinglyLinkedLists::get_tail() {
    return tail;
}

int SinglyLinkedLists::get_length() {
    return length;
}

void SinglyLinkedLists::prepend(int x) {
    Node* new_node = new Node();
    new_node->set_data(x);

    if (length == 0) {
        new_node->set_next_pointer(nullptr);
        head = new_node;
        tail = new_node;
    } else {
        new_node->set_next_pointer(head);
        head = new_node;
    }

    length++;
}

void SinglyLinkedLists::specific_insert(int x, Node* y) {
    if ((length == 0) || (y == nullptr)) {
        cout << "Node doesn't exist." << endl;
        return;
    } else {
        if (y == tail) {
            append(x);
            return;
        }

        Node* new_node = new Node();
        new_node->set_data(x);
        new_node->set_next_pointer(y->get_next_pointer());
        y->set_next_pointer(new_node);
        length++;
    }
}

Node* SinglyLinkedLists::find_node(int x) {
    Node* current_node = head;

    while (current_node != nullptr) {
        if (current_node->get_data() == x) {
            return current_node;
        }

        current_node = current_node->get_next_pointer();     
    }

    return nullptr;
}

void SinglyLinkedLists::find_element(int x) {
    Node* current_node = head;

    while (current_node != nullptr) {
        if (current_node->get_data() == x) {
            cout << "The element " << x << " exists." << endl;
            return;
        }

        current_node = current_node->get_next_pointer();
    }

    cout << "The element " << x << " doesn't exists." << endl;
}

void SinglyLinkedLists::append(int x) {
    if (length == 0) {
        prepend(x);
    } else {
        Node* new_node = new Node();
        new_node->set_data(x);
        new_node->set_next_pointer(nullptr);
        tail->set_next_pointer(new_node);
        tail = new_node;
        length++;
    }
}

void SinglyLinkedLists::delete_first_node() {
    if (length == 0) {
        cout << "List is empty, can't delete the first node." << endl;
    } else {
        Node* temp_node = head;
        head = head->get_next_pointer();
        temp_node->set_next_pointer(nullptr);
        delete temp_node;
        length--;

        if (head == nullptr) {
            tail = nullptr;
        }
    }
}

void SinglyLinkedLists::delete_last_node() {
    if (length == 0) {
        cout << "List is empty, can't delete the last node." << endl;
    } else {
        Node* temp_node = head;

        while (((temp_node->get_next_pointer()) != nullptr) && ((temp_node->get_next_pointer()->get_next_pointer()) != nullptr)) {
            temp_node = temp_node->get_next_pointer();
        }

        if (head == tail) {
            head = tail = nullptr;
            delete temp_node;
        } else {
            temp_node->set_next_pointer(nullptr);
            delete tail;
            tail = temp_node;
        }

        length--;
    }
}

void SinglyLinkedLists::delete_specific_node(Node* x) {
    if (length == 0) {
        cout << "List is empty, can't delete the specified node." << endl;
    } else if (x == nullptr) {
        cout << "The specified node is not in the list." << endl;
    } else if (x == head) {
        delete_first_node();
    } else if (x == tail) {
        delete_last_node();
    } else {
        Node* current_node = head;
        Node* prev_node;
        
        while (current_node != x) {
            prev_node = current_node;
            current_node = current_node->get_next_pointer();
        }
        
        prev_node->set_next_pointer(current_node->get_next_pointer());
        current_node->set_next_pointer(nullptr);
        delete current_node;
        length--;
    }
}

void SinglyLinkedLists::delete_middle_node() {
    if (length == 0) {
        cout << "List is empty, can't delete the middle node" << endl;
    } else if ((length == 1) || (length == 2)) {
        delete_first_node();
        return;
    } else {
        Node* current_node = head;
        Node* prev_node;
        int steps;

        if ((length % 2) == 0) {
            steps = ((length / 2) - 1);
        } else {
            steps = (length / 2);
        }

        for (int i = 0; i < steps; i++) {
            prev_node = current_node;
            current_node = current_node->get_next_pointer();
        }

        prev_node->set_next_pointer(current_node->get_next_pointer());
        current_node->set_next_pointer(nullptr);
        delete current_node;
        length--;
    }
}

void SinglyLinkedLists::reverse_linked_list() {
    if (length == 0) {
        cout << "Can't reverse list, list is empty." << endl;
    } else {
        if (length == 1) {
            return;
        } else {
            Node* current_node = head;
            Node* prev_node = nullptr;
            Node* temp_node = head;
            
            temp_node = head;
            head = tail;
            tail = temp_node;

            while (current_node != nullptr) {
                temp_node = current_node->get_next_pointer();
                current_node->set_next_pointer(prev_node);
                prev_node = current_node;
                current_node = temp_node;
            }
        }
    }
}

SinglyLinkedLists::~SinglyLinkedLists() {
    // Delete from Beginning
    Node* current_node = head;

    for (int i = 0; i < length; i++) {
        head = current_node->get_next_pointer();
        current_node->set_next_pointer(nullptr);
        delete current_node;
        current_node = head;
    }

    head = tail = nullptr;
}
