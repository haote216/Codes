#pragma once 
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<windows.h>
typedef int DataType;

typedef struct QueueNode
{
	struct QueueNode* _next;
	DataType _data;
}QueueNode;


typedef struct Queue
{
	QueueNode* _front;// ∂”Õ∑
	QueueNode* _back; // ∂”Œ≤
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
QueueNode* BuyQueueNode(DataType x);
void QueuePush(Queue* pq, DataType x);
void QueuePop(Queue* pq);
DataType QueueFront(Queue* pq);
int QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);
void Test();