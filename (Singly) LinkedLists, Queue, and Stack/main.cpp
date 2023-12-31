#include "SinglyLinkedLists.hpp"
#include "Node.hpp"

#include <iostream>

using namespace std;

int main() {
    SinglyLinkedLists list;

    list.prepend(1);
    list.append(2);
    list.append(3);
    list.append(8);
    list.append(9);
    list.append(10);

    int i = 0;
    Node* current_node;
    current_node = list.get_head();

    while (i < list.get_length()) {
        cout << current_node->get_data() << "->";
        current_node = current_node->get_next_pointer();
        i++;
    }

    cout << "NULL" << endl;
    cout << "Head: " << list.get_head() << ", Tail: " << list.get_tail() << ", Length: " << list.get_length() << endl;
    cout << "Head Value: " << list.get_head()->get_data() << " Tail Value: " << list.get_tail()->get_data() << " Length: " << list.get_length() << endl;

    list.delete_specific_node(list.find_node(100));
    list.delete_last_node();
    list.delete_first_node();
    list.append(25);
    list.append(93);
    list.find_element(0);
    list.specific_insert(4, list.get_head());
    list.specific_insert(7, list.find_node(9));
    list.specific_insert(5, list.find_node(2));
    list.specific_insert(6, list.get_tail());

    i = 0;
    current_node = list.get_head();

    while (i < list.get_length()) {
        cout << current_node->get_data() << "->";
        current_node = current_node->get_next_pointer();
        i++;
    }

    cout << "NULL" << endl;
    cout << "Head: " << list.get_head() << ", Tail: " << list.get_tail() << ", Length: " << list.get_length() << endl;
    cout << "Head Value: " << list.get_head()->get_data() << " Tail Value: " << list.get_tail()->get_data() << " Length: " << list.get_length() << endl;
    
    list.reverse_linked_list();

    i = 0;
    current_node = list.get_head();

    while (i < list.get_length()) {
        cout << current_node->get_data() << "->";
        current_node = current_node->get_next_pointer();
        i++;
    }

    cout << "NULL" << endl;
    cout << "Head: " << list.get_head() << ", Tail: " << list.get_tail() << ", Length: " << list.get_length() << endl;
    cout << "Head Value: " << list.get_head()->get_data() << " Tail Value: " << list.get_tail()->get_data() << " Length: " << list.get_length() << endl;

    list.delete_middle_node();

    list.delete_specific_node(list.find_node(100));

    list.find_element(1);
    list.find_element(20);
    list.delete_first_node();
    list.delete_last_node();
    list.delete_specific_node(list.find_node(5));

    i = 0;
    current_node = list.get_head();

    while (i < list.get_length()) {
        cout << current_node->get_data() << "->";
        current_node = current_node->get_next_pointer();
        i++;
    }

    cout << "NULL" << endl;
    cout << "Head: " << list.get_head() << ", Tail: " << list.get_tail() << ", Length: " << list.get_length() << endl;
    cout << "Head Value: " << list.get_head()->get_data() << " Tail Value: " << list.get_tail()->get_data() << " Length: " << list.get_length() << endl;

    return 0;
}
