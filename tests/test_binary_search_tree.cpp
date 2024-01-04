#include "dsaa/binary_search_tree.hpp"

int main()
{
    dsaa::BstTree bst_tree;
    bst_tree.insert(5);
    bst_tree.insert(3);
    bst_tree.insert(1);
    bst_tree.insert(1);
    bst_tree.insert(2);
    bst_tree.insert(10);
    bst_tree.traverse();
    return EXIT_SUCCESS;
}