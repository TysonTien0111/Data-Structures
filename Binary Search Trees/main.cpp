#include "Node.hpp"
#include "BinarySearchTree.hpp"

int main () {
    BinarySearchTree bst;

    // Iterative Delete Test for empty BST 
    bst.iterative_delete(40);

    // Iterative Insertion Test
    bst.iterative_insert(15); 
    bst.iterative_insert(6);
    bst.iterative_insert(23);
    bst.iterative_insert(4);
    bst.iterative_insert(7);
    bst.iterative_insert(5);
    bst.iterative_insert(71);
    bst.iterative_insert(50);
    bst.iterative_insert(3);
    bst.iterative_insert(8);
    bst.iterative_insert(100);
    bst.iterative_insert(90);
    bst.iterative_insert(120);
    
    // Iterative Insertion Test for duplicate values
    bst.iterative_insert(15);

    // Iterative Delete Test for nonexistent value in BST
    bst.iterative_delete(40);

    // Iterative Delete Test for no child
    bst.iterative_delete(5);
    bst.iterative_delete(120);
    
    // Iterative Delete Test for one child
    bst.iterative_delete(7);
    bst.iterative_delete(100);
    
    // Iterative Delete Test for two children
    bst.iterative_delete(15);
    bst.iterative_delete(6);
    
    // For Iterative Delete Test node #4
    bst.iterative_insert(5);
    bst.iterative_insert(6);
        
    bst.iterative_delete(4); // Still an Iterative Delete Test for two children
    
    // Iterative Delete Test, deleting the whole tree
    bst.iterative_delete(15); 
    bst.iterative_delete(6);

    // For Iterative Delete Test node #23
    bst.iterative_insert(51);

    bst.iterative_delete(23); // Still an iterative Delete Test for two children

    bst.iterative_delete(4);
    bst.iterative_delete(7);
    bst.iterative_delete(5);
    bst.iterative_delete(71);
    bst.iterative_delete(50);
    bst.iterative_delete(3);
    bst.iterative_delete(8);
    bst.iterative_delete(100);
    bst.iterative_delete(90);
    bst.iterative_delete(120);
    bst.iterative_delete(51);

    // Iterative Delete Test root with one child
    bst.iterative_insert(50);
    bst.iterative_insert(25);
    bst.iterative_delete(50);

    // Iterative Delete Test root with two children
    bst.iterative_insert(24);
    bst.iterative_insert(26);
    bst.iterative_delete(25);

    // Iterative Delete Test for and if-else case
    bst.iterative_insert(70);
    bst.iterative_insert(60);
    bst.iterative_insert(80);
    bst.iterative_insert(71);
    bst.iterative_insert(72);
    bst.iterative_delete(70);

    bst.iterative_delete(26);
    bst.iterative_delete(24);
    bst.iterative_delete(71);
    bst.iterative_delete(60);
    bst.iterative_delete(80);
    bst.iterative_delete(72);

    // Recursive Insertion Test
    // bst.recursive_insert(15, bst.get_root());
    // bst.recursive_insert(6, bst.get_root());
    // bst.recursive_insert(23, bst.get_root());
    // bst.recursive_insert(4, bst.get_root());
    // bst.recursive_insert(7, bst.get_root());
    // bst.recursive_insert(5, bst.get_root());
    // bst.recursive_insert(71, bst.get_root());
    // bst.recursive_insert(50, bst.get_root());
    // bst.recursive_insert(3, bst.get_root());
    //
    // Recursive Insertion Test for duplicate values
    // bst.recursive_insert(15, bst.get_root());

    return 0;
}
