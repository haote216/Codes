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
				if (parent == NULL)
					*tree = cur->_right;
				else
				{
					if (cur == parent->_left)
						parent->_left = cur->_right;
					else
						parent->_right = cur->_right;
				}
			}
			else if (cur->_right == NULL)
			{
				if (parent == NULL)
					*tree = cur->_left;
				else
				{
					if (cur == parent->_left)
						parent->_left = cur->_left;
					else
						parent->_right = cur->_left;
				}
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
			free(cur);
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



int BSTreeInsertR(BSTreeNode** tree, BSTDataType x)
{
	if (*tree == NULL)
	{
		*tree = BuyBSTreeNode(x);
		return 1;
	}
	if ((*tree)->_data > x)
		return BSTreeInsertR(&(*tree)->_left, x);
	else if ((*tree)->_data < x)
		return BSTreeInsertR(&(*tree)->_right, x);
	else
		return 0;
}

int BSTreeRemoveR(BSTreeNode** tree, BSTDataType x)
{
	if (*tree == NULL)
		return -1;
	if ((*tree)->_data > x)
		return BSTreeRemoveR(&(*tree)->_left, x);
	else if ((*tree)->_data < x)
		return BSTreeRemoveR(&(*tree)->_right, x);
	else
	{
		BSTreeNode* del = *tree;
		if ((*tree)->_left == NULL)
		{
			*tree = (*tree)->_right;
			free(del);
		}
		else if ((*tree)->_right == NULL)
		{
			*tree = (*tree)->_left;
			free(del);
		}	
		else
		{
			BSTreeNode* replace = (*tree)->_right;
			while (replace->_left)
			{
				replace = replace->_left;
			}
			(*tree)->_data = replace->_data;
			return BSTreeRemoveR(&(*tree)->_right, replace->_data);
		}
	}
	return 1;
}
BSTreeNode* BSTreeFindR(BSTreeNode** tree, BSTDataType x)
{
	if (*tree == NULL)
		return NULL;
	if ((*tree)->_data > x)
		return BSTreeFindR(&(*tree)->_left, x);
	else if ((*tree)->_data < x)
		return BSTreeFindR(&(*tree)->_right, x);
	else
		return *tree;
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
		BSTreeInsertR(&tree, a[i]);
	}
	BSTreeInOrder(&tree);
	printf("\n");


	BSTreeRemoveR(&tree, 0);
	BSTreeRemoveR(&tree, 1);
	BSTreeRemoveR(&tree, 2);
	BSTreeRemoveR(&tree, 3);
	BSTreeRemoveR(&tree, 4);
	BSTreeRemoveR(&tree, 5);
	BSTreeRemoveR(&tree, 6);
	BSTreeRemoveR(&tree, 7);
	BSTreeRemoveR(&tree, 8);
	BSTreeRemoveR(&tree, 9);

	BSTreeInOrder(&tree);
}