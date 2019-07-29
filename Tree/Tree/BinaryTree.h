#pragma once 
#include<stdio.h >
#include<malloc.h>
#include<windows.h>
#include<assert.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;


BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode* root);

size_t BinaryTreeSize(BTNode* root);
size_t BinaryTreeLeafSize(BTNode* root);
size_t BinaryTreeLevelKSize(BTNode* root);

void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeinOrder(BTNode* root);
void BinaryTreePostOrder(BTNode* root);

void TestBinaryTree();