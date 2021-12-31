#include "IntBinaryTree.h"
#ifndef insertnode_H
#define insertnode_H

IntBinaryTree::IntBinaryTree()
{
	root = NULL;
}

//Header.cpp
void IntBinaryTree::insertNode(int num) {
	TreeNode* newNode;//Pointer to new node
	TreeNode* nodePtr;//Pointer for traversing the tree
	// Create a new node
	newNode = new TreeNode;
	newNode->data = num;
	newNode->left = newNode->right = NULL;
	if (root == NULL)// Is the tree empty?
		root = newNode;
	else
	{
		nodePtr = root;
		while (nodePtr != NULL) {
			if (num < nodePtr->data) {
				if (nodePtr->left != NULL)
					nodePtr = nodePtr->left;
				else {
					nodePtr->left = newNode;
					break;
				}
			}
			else if (num >= nodePtr->data) {
				if (nodePtr->right != NULL)
					nodePtr = nodePtr->right;
				else {
					nodePtr->right = newNode;
					break;
				}
			}
		} //end of while loop
	}//end of else
}//end of function
#endif