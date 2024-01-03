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
        Node* parent_node = nullptr;

        while (current_node != nullptr) {
            if (new_node->get_data() == current_node->get_data()) {
                cout << "Can't have duplicates in the Binary Search Tree." << endl;
                delete new_node;
                return;
            } else {
                parent_node = current_node;

                if (new_node->get_data() < current_node->get_data()) {
                    current_node = current_node->get_left_pointer();
                } else {
                    current_node = current_node->get_right_pointer();
                }
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

void BinarySearchTree::recursive_insert (int x, Node* current_node) {
    if (node_count == 0) {
        Node* new_node = new Node();
        new_node->set_data(x);
        root = new_node;
        node_count++;
        cout << new_node->get_data() << " has been added to the Binary Search Tree." << endl;
        return;
    } 
        
    if (x == current_node->get_data()) {
        cout << "Can't have duplicates in the Binary Search Tree." << endl;
        return;
    }

    Node* next_pointer = (x < current_node->get_data()) 
            ? (current_node->get_left_pointer()) : (current_node->get_right_pointer());

    if (next_pointer == nullptr) {
        Node* new_node = new Node();
        new_node->set_data(x);

        if (x < current_node->get_data()) {
            current_node->set_left_pointer(new_node);
        } else {
            current_node->set_right_pointer(new_node);
        }

        node_count++;
        cout << new_node->get_data() << " has been added to the Binary Search Tree." << endl;
    } else {
        recursive_insert(x, next_pointer);
    }
}

void BinarySearchTree::iterative_delete (int x) {
    if (node_count == 0) {
        cout << "The Binary Search Tree is empty, can't delete " << x << "." << endl;
        return;
    } else {
        Node* current_node = root;
        Node* parent_node = nullptr;

        while (current_node != nullptr) {
            if (x == current_node->get_data()) {
                if ((current_node->get_left_pointer() == nullptr) 
                        && (current_node->get_right_pointer() == nullptr)) {
                    if ((parent_node != nullptr) && (current_node == parent_node->get_left_pointer())) {
                        parent_node->set_left_pointer(nullptr);
                    } else if (parent_node != nullptr) {
                        parent_node->set_right_pointer(nullptr);
                    }
                    
                    delete current_node;
                    node_count--;
                } else {
                    if ((current_node->get_left_pointer() != nullptr) 
                            && (current_node->get_right_pointer() != nullptr)) {
                        // Right subtree, minimum node
                        // int temp_data = current_node->get_data();
                        // Node* temp_node = current_node->get_right_pointer();
                        //
                        // while (temp_node->get_left_pointer() != nullptr) {
                        //     parent_node = temp_node;
                        //     temp_node = temp_node->get_left_pointer();
                        // }
                        //
                        // current_node->set_data(temp_node->get_data());
                        // temp_node->set_data(temp_data);
                        // 
                        // if (current_node == root) {
                        //     if (parent_node == nullptr) {
                        //         current_node->set_right_pointer(temp_node->get_right_pointer());
                        //     } else {    
                        //         parent_node->set_left_pointer(temp_node->get_right_pointer());
                        //     }
                        // } else {
                        //     if (current_node->get_right_pointer() == temp_node) {
                        //         current_node->set_right_pointer(temp_node->get_right_pointer());
                        //     } else {
                        //         parent_node->set_left_pointer(temp_node->get_right_pointer());
                        //     }
                        // }
                        // 
                        // temp_node->set_right_pointer(nullptr);
                        // delete temp_node;
                        // node_count--;

                        //Left subtree, maximum node
                        int temp_data = current_node->get_data();
                        Node* temp_node = current_node->get_left_pointer();

                        while (temp_node->get_right_pointer() != nullptr) {
                            parent_node = temp_node;
                            temp_node = temp_node->get_right_pointer();
                        }

                        current_node->set_data(temp_node->get_data());
                        temp_node->set_data(temp_data);

                        if (current_node == root) {
                            if (parent_node == nullptr) {
                                current_node->set_left_pointer(temp_node->get_left_pointer());
                            } else {
                                parent_node->set_right_pointer(temp_node->get_left_pointer());
                            }
                        } else {
                            if () {

                            } else {

                            }
                        }

                        temp_node->set_left_pointer(nullptr);
                        delete temp_node;
                        node_count--;
                    } else {
                        Node* child_node = (current_node->get_left_pointer() != nullptr) 
                                ? (current_node->get_left_pointer()) : (current_node->get_right_pointer()); 

                        if (parent_node != nullptr) { 
                            if (current_node == parent_node->get_left_pointer()) {
                                parent_node->set_left_pointer(child_node);
                            } else {
                                parent_node->set_right_pointer(child_node);
                            }
                        }

                        current_node->set_left_pointer(nullptr);
                        current_node->set_right_pointer(nullptr);

                        if (current_node == root) {
                            root = child_node;
                        }

                        delete current_node;
                        node_count--;
                    }
                }

                cout << x << " has been removed from the Binary Search Tree." << endl;
                return;
            } else {
                parent_node = current_node;

                if (x < current_node->get_data()) {
                    current_node = current_node->get_left_pointer();
                } else {
                    current_node = current_node->get_right_pointer();
                }
            }
        }

        cout << "The value " << x << " is not in the Binary Search Tree." << endl;
    }
}

BinarySearchTree::~BinarySearchTree () {
}
