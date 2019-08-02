#pragma once 
#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int BSTDataType;

typedef struct BSTreeNode
{
	struct BSTreeNode* _left;
	struct BSTreeNode* _right;
	BSTDataType _data;
}BSTreeNode;

BSTreeNode* BuyBSTreeNode(BSTDataType x);

int BSTreeInsert(BSTreeNode** tree, BSTDataType x);
int BSTreeRemove(BSTreeNode** tree, BSTDataType x);
BSTreeNode* BSTreeFind(BSTreeNode** tree, BSTDataType x);

int BSTreeInsertR(BSTreeNode** tree, BSTDataType x);
int BSTreeRemoveR(BSTreeNode** tree, BSTDataType x);
BSTreeNode* BSTreeFindR(BSTreeNode** tree, BSTDataType x);

void BSTreeInOrder(BSTreeNode** tree);
void TestBSTree();