#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//熟悉什么是顺序表，然后实现静态顺序表的以下接口：

#define MAX_SIZE 10 
typedef unsigned int size_t;
typedef int DataType;

typedef struct SeqList
{
	DataType _array[MAX_SIZE];
	int _size; // 顺序表中有效元素的个数 
}SeqList, *PSeqList;

typedef struct SeqList SeqList;


void SeqListInit(PSeqList ps);
void SeqListPushBack(PSeqList ps, DataType data);
void SeqListPopBack(PSeqList ps);
void SeqListPushFront(PSeqList ps, DataType data);
void SeqListPopFront(PSeqList ps);
void SeqListInsert(PSeqList ps, size_t pos, DataType data);
void SeqListErase(PSeqList ps, size_t pos);
int SeqListFind(PSeqList ps, DataType data);
void SeqListRemove(PSeqList ps, DataType data);
void SeqListRemoveAll(PSeqList ps, DataType data);
int SeqListEmpty(PSeqList ps); 
int SeqListSize(PSeqList ps);
///////////////////////////////////////////////////////////////////////////////////////////////////// 
// 辅助操作 
// 打印顺序表中的元素 
//void PrintSeqList(PSeqList ps);
// 用冒泡排序对顺序表中的元素进行排序 
//void BubbleSort(int* array, int size);
// 用选择排序对顺序表中的元素进行排序 
//void SelectSort(int* array, int size);
// 选择排序优化---一次找出最大最小元素所在的位置 
//void SelectSort_OP(int* array, int size);
