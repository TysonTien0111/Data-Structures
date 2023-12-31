#include "Node.hpp"

Node::Node() {
}

void Node::set_data(int x) {
    data = x;
}

void Node::set_next_pointer(Node* y) {
    next_pointer = y;
}

int Node::get_data() {
    return data;
}

Node* Node::get_next_pointer() {
    return next_pointer;
}

Node::~Node() {
}
