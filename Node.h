#pragma once
#include <iostream>
#include "Tree.h"
using namespace std;

class Node
{
	friend class Tree;
	friend int main();
private:
	int data;
	Node* left;
	Node* right;
public:
	Node();
};

