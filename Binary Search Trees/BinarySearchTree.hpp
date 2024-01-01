#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "Node.hpp"

class BinarySearchTree: public Node {
    public:
        BinarySearchTree ();
        void set_root (Node* x);
        void set_node_count (int x);
        Node* get_root ();
        int get_node_count ();
        void iterative_insert (int x);
        void recursive_insert ();
        ~BinarySearchTree ();
    private:
        Node* root;
        int node_count;
};

#endif // BINARYSEARCHTREE_H
