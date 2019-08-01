#include"BinartSearchTree.h"

BSTreeNode* BuyBSTreeNode(BSTDataType x)
{
	BSTreeNode* node = (BSTreeNode*)malloc(sizeof(BSTreeNode));
	node->_data = x;
	node->_left = node->_right = NULL;
	return node;
}

int BSTreeInsert(BSTreeNode** tree, BSTDataType x)
{
	BSTreeNode* cur = NULL;
	BSTreeNode* parent = NULL;
	if (*tree == NULL)
	{
		*tree = BuyBSTreeNode(x);
		return 1;
	}

	cur = *tree;
	while (cur)
	{
		if (cur->_data > x)
		{
			parent = cur;
			cur = cur->_left;
		}
		else if (cur->_data < x)
		{
			parent = cur;
			cur = cur->_right;
		}
		else
			return 0;
	}

	if (parent->_data > x)
		parent->_left = BuyBSTreeNode(x);
	else
		parent->_right = BuyBSTreeNode(x);
	return 1;
}

int BSTreeRemove(BSTreeNode** tree, BSTDataType x)
{
	BSTreeNode* cur, *parent;
	cur = *tree;
	parent = NULL;
	while (cur)
	{
		if (cur->_data > x)
		{
			parent = cur;
			cur = cur->_left;
		}
		else if (cur->_data < x)
		{
			parent = cur;
			cur = cur->_right;
		}		
		else
		{
			//¿ªÊ¼É¾³ý
			if (cur->_left == NULL)
			{
				if (cur == parent->_left)
					parent->_left = cur->_right;
				else
					parent->_right = cur->_right;
			}
			else if (cur->_right == NULL)
			{
				if (cur == parent->_left)
					parent->_left = cur->_left;
				else
					parent->_right = cur->_left;
			}
			else
			{
				BSTreeNode* replace = cur->_right;
				while (replace->_left)
				{
					replace = replace->_left;
				}
				cur->_data = replace->_data;
				return BSTreeRemove(&cur->_right, replace->_data);		
			}
			return 1;
		}	
	}
	return 0;
}

BSTreeNode* BSTreeFind(BSTreeNode** tree, BSTDataType x)
{
	BSTreeNode* cur = *tree;
	while (cur)
	{
		if (cur->_data > x)
			cur = cur->_left;
		else if (cur->_data < x)
			cur = cur->_right;
		else
			return cur;
		return NULL;
	}
}

void BSTreeInOrder(BSTreeNode** tree)
{
	if (*tree == NULL)
	{
		return;
	}
	BSTreeInOrder(&(*tree)->_left);
	printf("%d ", (*tree)->_data);
	BSTreeInOrder(&(*tree)->_right);
}
void TestBSTree()
{
	BSTreeNode* tree = NULL;
	int a[] = {5, 3, 4, 1, 7, 8, 2, 6, 0, 9 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		BSTreeInsert(&tree, a[i]);
	}
	BSTreeInOrder(&tree);
	printf("\n");
	BSTreeRemove(&tree, 5);
	BSTreeRemove(&tree, 2);
	BSTreeRemove(&tree, 8);
	BSTreeRemove(&tree, 1);

	BSTreeRemove(&tree, 1);
	BSTreeRemove(&tree, 2);
	BSTreeRemove(&tree, 3);
	BSTreeRemove(&tree, 4);
	BSTreeRemove(&tree, 5);
	BSTreeRemove(&tree, 6);
	BSTreeRemove(&tree, 7);
	BSTreeRemove(&tree, 8);
	BSTreeRemove(&tree, 9);
	BSTreeRemove(&tree, 10);
	BSTreeRemove(&tree, 11);
	BSTreeInOrder(&tree);
}