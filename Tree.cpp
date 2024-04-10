#include "Tree.h"
#include "Node.h"
#include <iostream>
using namespace std;

Tree::Tree() {}


Node* Tree::CreateNode(int data) {
	// Create a new Node object and allocate memory for it
	Node* newNode = new Node();

	// Set the data value of the new node to the provided data
	newNode->data = data;

	// Set the left child pointer of the new node to nullptr (no left child initially)
	newNode->left = nullptr;

	// Set the right child pointer of the new node to nullptr (no right child initially)
	newNode->right = nullptr;

	// Return a pointer to the newly created node
	return newNode;
}



Node* Tree::InsertNode(Node* node, int val)
{
	return nullptr;
}

Node* Tree::DeleteNode(Node* node, int val)
{
	return nullptr;
}

Node* Tree::FindMin(Node* node) const
{
	return nullptr;
}

void Tree::DeleteNodePrivate(Node* node, int value) const
{
}

void Tree::InorderTransversal(Node* node) const
{
}


void Tree::Insert(int val)
{
	if (root == nullptr) {
		return;
	}

	/*Insert(root->left);
	Insert(root->right);*/
}

void Tree::DeleteN(int val)
{
}

void Tree::PreOrder(Node* root)
{
	if (root == nullptr) {
		return;
	}

	cout << root->data << ", ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void Tree::InOrder(Node* root)
{
	if (root == nullptr) {
		return;
	}

	InOrder(root->left);
	cout << root->data << ", ";
	InOrder(root->right);

}

void Tree::PostOrder(Node* root)
{
	if (root == nullptr) {
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout << root->data << ", ";
}




void Tree::PrintTree(Node* root) {
	if (root == nullptr)
	{
		return;
	}

	cout << root->data << ", " ;
	PrintTree(root->left);
	PrintTree(root->right);
}