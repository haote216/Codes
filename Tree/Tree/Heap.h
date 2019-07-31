#pragma once 
#include<stdio.h>
#include<assert.h>
#include<malloc.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;

void Swap(HPDataType* a, HPDataType* b);
void AdjustDown(HPDataType* a, int n, int root);
void AdjustUp(HPDataType* a, int n, int child);

void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);

void Print(Heap* hp);
void TestHeap();