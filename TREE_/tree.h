#pragma once

typedef struct _Node {
	int value;
	struct _Node* left = NULL;
	struct _Node* right = NULL;
}Node;

extern Node* makeTree();
extern void printTree(Node* root);