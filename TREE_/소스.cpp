#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "tree.h"

int main(int argc, char* argv[])
{
	printf("main");

	Node* root = makeTree();
	printTree(root);

	_getch();
}