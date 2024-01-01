#include "Node.hpp"

Node::Node () {
    data = 0;
    left_pointer = right_pointer = nullptr;
}

void Node::set_data (int x) {
    data = x;
}

void Node::set_left_pointer (Node* x) {
    left_pointer = x;
}

void Node::set_right_pointer (Node* x) {
    right_pointer = x;
}

int Node::get_data () {
    return data;
}

Node* Node::get_left_pointer () {
    return left_pointer;
}

Node* Node::get_right_pointer () {
    return right_pointer;
}

Node::~Node () {
}
