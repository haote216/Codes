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


BTNode* BuyBTNode(BTDataType x);
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode** root);

int BinaryTreeSize(BTNode* root);
int BinaryTreeHeight(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root,int k);

BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeinOrder(BTNode* root);
void BinaryTreePostOrder(BTNode* root);
void BinaryTreeLevelOrder(BTNode* root);
int BinaryTreeComplete(BTNode* root);
void BinaryTreeMirror(BTNode* root);

void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);

void TestBinaryTree();