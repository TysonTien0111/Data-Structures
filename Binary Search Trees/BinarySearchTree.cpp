#include "Node.hpp"
#include "BinarySearchTree.hpp"

#include <iostream>

using namespace std;

BinarySearchTree::BinarySearchTree () {
    root = nullptr;
    node_count = 0;
}

void BinarySearchTree::set_root (Node* x) {
    root = x;
}

void BinarySearchTree::set_node_count (int x) {
    node_count = x;
}

Node* BinarySearchTree::get_root () {
    return root;
}

int BinarySearchTree::get_node_count () {
    return node_count;
}

void BinarySearchTree::iterative_insert(int x) {
    Node* new_node = new Node();
    new_node->set_data(x);

    if (node_count == 0) {
        root = new_node;
    } else {
        Node* current_node = root;
        Node* parent_node;

        while (current_node != nullptr) {
            if (new_node->get_data() == current_node->get_data()) {
                cout << "Can't have duplicates in the Binary Search Tree." << endl;
                return;
            } else if (new_node->get_data() < current_node->get_data()) {
                parent_node = current_node;
                current_node = current_node->get_left_pointer();
            } else {
                parent_node = current_node;
                current_node = current_node->get_right_pointer();
            }
        }

        if (new_node->get_data() < parent_node->get_data()) {
            parent_node->set_left_pointer(new_node);
        } else {
            parent_node->set_right_pointer(new_node);
        }
    }

    cout << new_node->get_data() << " has been added to the Binary Search Tree." << endl;
    node_count++;
}

void BinarySearchTree::recursive_insert () {
}

BinarySearchTree::~BinarySearchTree () {
}
