#pragma once
#include "Node.h" 


class Tree
{
	friend int main();
	friend class Node;
private:
	Node* root;
	Node* CreateNode(int data);
	Node* InsertNode(Node* root, int val);
	Node* DeleteNode(Node* root, int val);
	Node* FindMin(Node* root) const;
	void DeleteNodePrivate(Node* root, int value) const;
	void InorderTransversal(Node* root) const;
public:
	Tree();
	void Insert(int val);
	void DeleteN(int val);
	void PreOrder(Node* root);
	void InOrder(Node* root);
	void PostOrder(Node* root);
	void PrintTree(Node* root);
};
