#ifndef CLASS_TREENODE_TREENODE_H
#define CLASS_TREENODE_TREENODE_H

// TreeNode declaration

class TreeNode {
public:
    // Constructor: Initializes the node's value (v_) with v
    // Sets both left and right pointers to nullptr (no children yet)
    TreeNode(int v, TreeNode* left = nullptr, TreeNode* right = nullptr)
        : v_{v}, left_{left}, right_{right} {}

    int value() const {return v_;}
    TreeNode* leftSubTree() const { return left_; }
    TreeNode* rightSubTree() const { return right_; }
    void leftSubTree(TreeNode* node) { left_ = node; }
    void rightSubTree(TreeNode* node) { right_ = node; }

private:
    int v_;
    TreeNode* left_;
    TreeNode* right_;

};

#endif // CLASS_TREENODE_TREENODE_H