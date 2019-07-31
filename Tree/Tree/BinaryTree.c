#include"BinaryTree.h"
#include"Queue.h"
#include"Stack.h"


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

void BinaryTreeDestory(BTNode** pptree)
{
	BTNode* root = *pptree;
	if (root == NULL)
		return;

	BinaryTreeDestory(&root->_left);
	BinaryTreeDestory(&root->_right);
	free(root);
	*pptree = NULL;
}

//这种方法有线程安全问题
//int size = 0;
//void BinaryTreeSize(BTNode* root)
//{
//	if (root == NULL)
//		return;
//	++size;
//	BinaryTreeSize(root->_left);
//	BinaryTreeSize(root->_right);
//}


int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;

	return BinaryTreeSize(root->_left) +
		BinaryTreeSize(root->_right) + 1;
}

int BinaryTreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeHeight(root->_left) > BinaryTreeHeight(root->_right) ? BinaryTreeHeight(root->_left) + 1 : BinaryTreeHeight(root->_right) + 1;
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL  && root->_right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->_left)+ BinaryTreeLeafSize(root->_right);
}

int BinaryTreeLevelKSize(BTNode* root,int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLeafSize(root->_left, k - 1) + BinaryTreeLeafSize(root->_right, k - 1);
}


BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	BTNode* ret;
	if (root == NULL || root->_data == x)
		return root;
	
	ret = BinaryTreeFind(root->_left, x);
	if (ret)
		return ret;
	ret = BinaryTreeFind(root->_right, x);
	if (ret)
		return ret;

	return NULL;

}


//递归 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
		return;
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);

}
void BinaryTreeinOrder(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeinOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeinOrder(root->_right);
}
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%c ", root->_data);
}
//层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
		QueuePush(&q,root);

	while (QueueEmpty(&q) != 0)
	{
		QUDataType front = QueueFront(&q);
		printf("%c ", front->_data);
		QueuePop(&q);
		if (front->_left)
			QueuePush(&q,front->_left);
		if (front->_right)
			QueuePush(&q,front->_right);
	}
	printf("\n");
}

//判断完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (QueueEmpty(&q) != 0)
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueuePush(&q,front->_left);
			QueuePush(&q,front->_right);
		}
		else
		{
			break;
		}
	}
	while (QueueEmpty(&q) != 0)
	{
		BTNode* front = QueueFront(&q);
		if (front)
		{
			QueueDestory(&q);
			return -1;
		}
		else
		{
			QueuePop(&q);
		}
	}
	return 0;
}

//递归-- 二叉树镜像
//void BinaryTreeMirror(BTNode* root)
//{
//	if (root == NULL)
//		return;
//	swap(root->_left, root->_right);
//	if(root->_left != NULL)
//		BinaryTreeMirror(root->_left);
//	if (root->_right != NULL)
//		BinaryTreeMirror(root->_right);
//}

//非递归前序遍历
void BinaryTreePrevOrderNonR(BTNode* root)
{
	BTNode* cur = root;
	Stack s;
	StackInit(&s);
	while (cur || StackEmpty(&s) !=0 )
	{
		while (cur)
		{
			StackPush(&s,cur);
			printf("%c ", cur->_data);
			cur = cur->_left;
		}
		BTNode* top = StackTop(&s);
		StackPop(&s);
		cur = top->_right;
	}
	printf("\n");
}
//非递归中序遍历
void BinaryTreeInOrderNonR(BTNode* root)
{
	BTNode* cur = root;
	Stack s;
	StackInit(&s);
	while (cur || StackEmpty(&s) != 0)
	{
		while (cur)
		{
			StackPush(&s, cur);
			cur = cur->_left;
		}
		BTNode* top = StackTop(&s);
		StackPop(&s);
		printf("%c ", top->_data);
		cur = top->_right;	
	}
}
//非递归后序遍历
void BinaryTreePostOrderNonR(BTNode* root)
{
	BTNode* cur = root;
	BTNode* prev = NULL;
	Stack s;
	StackInit(&s);
	while (cur || StackEmpty(&s) != 0)
	{
		while (cur)
		{
			StackPush(&s, cur);
			cur = cur->_left;
		}
		BTNode* top = StackTop(&s);
		if (top->_right == NULL  || top->_right == prev)
		{
			printf("%c ", top->_data);
			prev = top;
			StackPop(&s);
		}
		else
			cur = top->_right;
	}
}


void TestBinaryTree()
{
	char array[] = { 'A', 'B', 'D', '#', '#','#', 'C' ,'E','#','#','F'};
	size_t i = 0;
	BTNode* tree = BinaryTreeCreate(array, sizeof(array) / sizeof(BTDataType), &i);
	BinaryTreePrevOrder(tree);
	//BinaryTreeinOrder(tree);
	//BinaryTreePostOrder(tree);
	printf("\n");

	//printf("%d\n", BinaryTreeSize(tree));
	//printf("%d\n", BinaryTreeLeafSize(tree));
	//printf("%d\n", BinaryTreeHeight(tree));

	//BinaryTreePrevOrderNonR(tree);
	//BinaryTreeInOrderNonR(tree);
	//BinaryTreePostOrderNonR(tree);

	//BinaryTreeMirror(tree);
	//BinaryTreePrevOrder(tree);
	printf("%d\n",BinaryTreeComplete(tree));

	
}