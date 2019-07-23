#pragma once

#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_back = NULL;
	pq->_front = NULL;
}

void QueueDestory(Queue* pq)
{
	QueueNode* cur = pq->_front;
	while (cur != NULL)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	pq->_back = pq->_front = NULL; 
}

QueueNode* BuyQueueNode(DataType x)
{
	QueueNode* node = (QueueNode*)malloc(sizeof(QueueNode));
	assert(node);

	node->_next = NULL;
	node->_data = x;
	return node;
}

void QueuePush(Queue* pq, DataType x)
{
	assert(pq);
	if (pq->_back == NULL)
	{
		pq->_back = pq->_front = BuyQueueNode(x);
	}
	else
	{
		QueueNode* back = BuyQueueNode(x);
		pq->_back->_next = back;
		pq->_back = back;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->_front->_next;
	free(pq->_front);
	pq->_front = cur;

	if (cur == NULL)
	{
		pq->_back = NULL;
	}
}

DataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->_front->_data;
}

DataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->_back->_data;
}

int QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_front == NULL ? 0 : 1;
}
int QueueSize(Queue* pq)
{
	int size = 1;
	QueueNode* cur = pq->_front;
	while (cur != pq->_back)
	{
		size++;
		cur = cur->_next;
	}
	return size;
}
void Test()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	printf("%d", QueueFront(&q));
	QueuePop(&q);
	printf("%d", QueueFront(&q));
	QueuePop(&q);
	printf("%d", QueueFront(&q));
	QueuePop(&q);
	printf("%d", QueueFront(&q));
	QueuePop(&q);

	QueueDestory(&q);
}