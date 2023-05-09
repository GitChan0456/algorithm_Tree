#include <stdio.h>
#include <stdlib.h>

Node* root;

static Node* createNode(int value)
{
	//1 sizeof(Node) malloc
	Node *pNode = (Node*)malloc(sizeof(Node) * 3);

	//2 초기화 : n->value = val, left, right (NULL)
	pNode->value = val;
	pNode->left = NULL;
	pNode->right = NULL;

	//3 만든 Node객체 변수 반환
	return pNode;
}

static Node* connectChild(Node* parent, Node* left, Node* right)
{
	if(parent == NULL)	return NULL;

	parent->left = left;
	parent->right = right;
}

static Node* makeTree()
{
	Node* pRoot = NULL;
	Node* tleft = NULL;
	Node* tright = NULL;

	pRoot = createNode(100);
	tleft = createNode(200);
	tright = createNode(300);

	connectChild(pRoot, tleft, tright);
	connectChild(tright, createNode(400) , createNode(500));

	return pRoot;
}

static void printTree(Node* root)
{
	if (root == NULL) return;

	printf("Node: %d ", root->value);
	printTree(root->left);
	printTree(root->right);
}