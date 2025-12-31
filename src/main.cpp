#include <iostream>
#include "tree_structures/TreeNode.h"

int main() {
    TreeNode root(10);
    TreeNode left(5);
    TreeNode right(15);

    root.leftSubTree(&left);
    root.rightSubTree(&right);

    std::cout << root.value() << std::endl;
    std::cout << left.value() << std::endl;
    std::cout << right.value() << std::endl;

    return 0;
}
