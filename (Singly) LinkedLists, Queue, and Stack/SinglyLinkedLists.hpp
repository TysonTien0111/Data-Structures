#ifndef SINGLYLINKEDLISTS_H
#define SINGLYLINKEDLISTS_H

#include "Node.hpp"

class SinglyLinkedLists: public Node {
    public:
        SinglyLinkedLists();
        void set_head(Node* x);
        void set_tail(Node* y);
        void set_length(int z);
        Node* get_head();
        Node* get_tail();
        int get_length();
        void prepend(int x);
        void specific_insert(int x, Node* y);
        Node* find_node(int x); 
        void find_element(int x); 
        void append(int x);
        void delete_first_node();
        void delete_last_node();
        void delete_specific_node(Node* x);
        void delete_middle_node();
        void reverse_linked_list();
        ~SinglyLinkedLists();
    private:
        Node* head;
        Node* tail;
        int length;
};

#endif // SINGLYLINKEDLISTS_H
