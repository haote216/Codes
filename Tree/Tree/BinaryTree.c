#include"BinaryTree.h"

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* node = malloc(sizeof(BTNode));
	node->_left = NULL;
	node->_right = NULL;
	node->_data = x;
	return node;
}


BTNode* BinaryTreeCreate(BTDataType* a,int n, int* pi)
{
	if (a[*pi] != '#')
	{
		BTNode* root = BuyBTNode(a[*pi]);

		++(*pi);
		root->_left = BinaryTreeCreate(a, n, pi);

		++(*pi);
		root->_right = BinaryTreeCreate(a, n, pi);
		return root;
	}
	else
		return NULL;
}


void TestBinaryTree()
{
	char array[] = { 'A', 'B', 'D', '#', '#', '#', 'C', 'E', '#', '#', 'F', '#', '#' };
	size_t i = 0;
	BTNode* tree = BinaryTreeCreate(array, sizeof(array) / sizeof(BTDataType), &i);
}