#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node ();
        void set_data (int x);
        void set_left_pointer (Node* x);
        void set_right_pointer (Node* x);
        int get_data ();
        Node* get_left_pointer ();
        Node* get_right_pointer ();
        ~Node ();
    private:
        int data;
        Node* left_pointer;
        Node* right_pointer;
};

#endif // NODE_H
