#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//��Ϥʲô��˳���Ȼ��ʵ�־�̬˳�������½ӿڣ�

#define MAX_SIZE 10 
typedef unsigned int size_t;
typedef int DataType;

typedef struct SeqList
{
	DataType _array[MAX_SIZE];
	int _size; // ˳�������ЧԪ�صĸ��� 
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
// �������� 
// ��ӡ˳����е�Ԫ�� 
//void PrintSeqList(PSeqList ps);
// ��ð�������˳����е�Ԫ�ؽ������� 
//void BubbleSort(int* array, int size);
// ��ѡ�������˳����е�Ԫ�ؽ������� 
//void SelectSort(int* array, int size);
// ѡ�������Ż�---һ���ҳ������СԪ�����ڵ�λ�� 
//void SelectSort_OP(int* array, int size);
