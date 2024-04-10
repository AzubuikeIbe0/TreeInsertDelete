#include "Tree.h"
#include "Node.h"
#include <iostream>
using namespace std;

int main()
{
    Tree tree;
    Node* root = tree.CreateNode(1);
    

    root->left = tree.CreateNode(2);
    root->right = tree.CreateNode(3);
    
    root->left->left = tree.CreateNode(4);
    root->left->right = tree.CreateNode(5);
    root->right->left = tree.CreateNode(6);
    root->right->right = tree.CreateNode(7);

    root->left->right->left = tree.CreateNode(9);
    root->right->right->left = tree.CreateNode(10);

    //tree.PrintTree(root);
    // 
    //tree.PreOrder(root);
    //1, 2, 4, 5, 9, 3, 6, 7, 10,
    // 
    //tree.InOrder(root);
    //4, 2, 9, 5, 1, 6, 3, 10, 7,

    tree.PostOrder(root);
    //4, 9, 5, 2, 6, 10, 7, 3, 1,


    return 0;
}


