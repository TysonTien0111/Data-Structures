#include "Node.hpp"
#include "BinarySearchTree.hpp"

int main () {
    BinarySearchTree bst;

    bst.iterative_insert(15); 
    bst.iterative_insert(6);
    bst.iterative_insert(23);
    bst.iterative_insert(4);
    bst.iterative_insert(7);
    bst.iterative_insert(5);
    bst.iterative_insert(71);
    bst.iterative_insert(50);
    bst.iterative_insert(3);
    
    return 0;
}
