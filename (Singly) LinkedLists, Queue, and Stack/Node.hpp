#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node();
        void set_data(int x);
        void set_next_pointer(Node* y);
        int get_data();
        Node* get_next_pointer();
        ~Node();
    private:
        int data;
        Node* next_pointer;
};

#endif // NODE_H

