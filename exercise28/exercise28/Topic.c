#include"Topic.h"

void QueueByTwoStackInit(QueueByTwoStack* qts)
{
	StackInit(&qts->s1);
	StackInit(&qts->s2);
}
void QueueByTwoStackDestory(QueueByTwoStack* qts)
{
	StackDestory(&qts->s1);
	StackDestory(&qts->s2);

}

void QueueByTwoStackPush(QueueByTwoStack* qts, STDataType x)
{
	assert(qts);
	StackPush(&(qts->s1), x);
}
void QueueByTwoStackPop(QueueByTwoStack* qts)
{
	assert(qts);
	if (StackEmpty(&qts->s2) == 0)
	{
		while (StackEmpty(&qts->s1))
		{
			StackPush(&qts->s2, StackTop(&qts->s1));
			StackPop(&qts->s1);
		}
	}
	StackPop(&qts->s2);

}
STDataType QueueByTwoStackFront(QueueByTwoStack* qts)
{
	if (StackEmpty(&qts->s2) == 0)
	{
		while (StackEmpty(&qts->s1))
		{
			StackPush(&qts->s2, StackTop(&qts->s1));
			StackPop(&qts->s1);
		}
	}
	return StackTop(&qts->s2);
}

int QueueByTwoStackSize(QueueByTwoStack* qts)
{
	return StackSize(&qts->s1) + StackSize(&qts->s2);
}
int QueueByTwoStackEmpty(QueueByTwoStack* qts)
{
	return StackEmpty(&qts->s1) | StackEmpty(&qts->s2);
}

//void TestQueueByTwoStack()
//{
//	QueueByTwoStack qts;
//	QueueByTwoStackInit(&qts);
//	QueueByTwoStackPush(&qts, 1);
//	QueueByTwoStackPush(&qts, 2);
//	QueueByTwoStackPush(&qts, 3);
//
//	QueueByTwoStackPop(&qts);
//	QueueByTwoStackPop(&qts);
//
//	QueueByTwoStackPush(&qts, 4);
//	QueueByTwoStackPush(&qts, 5);
//
//	while (QueueByTwoStackEmpty(&qts))
//	{
//		printf("%d\n", QueueByTwoStackFront(&qts));
//		QueueByTwoStackPop(&qts);
//	}
//}

//////////////////////////////////
//俩个队列实现一个栈
void StackByTwoQueueInit(StackByTwoQueue* stq)
{
	QueueInit(&stq->q1);
	QueueInit(&stq->q2);
}
void StackByTwoQueueDestory(StackByTwoQueue* stq)
{
	QueueDestory(&stq->q1);
	QueueDestory(&stq->q2);
}

void StackByTwoQueuePush(StackByTwoQueue* stq, QUDataType x)
{
	assert(stq);
	if (QueueEmpty(&stq->q1) != 0)
	{
		QueuePush(&stq->q1, x);
	}
	else
	{
		QueuePush(&stq->q2, x);
	}
}
void StackByTwoQueuePop(StackByTwoQueue* stq)
{
	assert(stq);
	Queue* empty =&stq->q1, * nonempty = &stq->q2;
	if (QueueEmpty(&stq->q1) != 0)
	{
		empty = &stq->q2;
		nonempty = &stq->q1;
	}
	while (QueueSize(nonempty) > 1)
	{
		QueuePush(empty, QueueFront(nonempty));
		QueuePop(nonempty);
	}
	QueuePop(nonempty);
}


QUDataType StackByTwoQueueTop(StackByTwoQueue* stq)
{
	assert(stq);
	if (QueueEmpty(&stq->q1))
	{
		return QueueBack(&stq->q1);
	}
	else
	{
		return QueueBack(&stq->q2);
	}
}

int StackByTwoQueueSize(StackByTwoQueue* stq)
{
	return QueueSize(&stq->q1) + QueueSize(&stq->q2);
}
int StackByTwoQueueEmpty(StackByTwoQueue* stq)
{
	return QueueEmpty(&stq->q1) | QueueEmpty(&stq->q2);
}



//void TestStackByTwoQueue()
//{
//	StackByTwoQueue stq;
//	StackByTwoQueueInit(&stq);
//	StackByTwoQueuePush(&stq, 1);
//	StackByTwoQueuePush(&stq, 2);
//	StackByTwoQueuePush(&stq, 3);
//	StackByTwoQueuePop(&stq);
//	StackByTwoQueuePop(&stq);
//	StackByTwoQueuePush(&stq, 4);
//	StackByTwoQueuePush(&stq, 5);
//
//	while (StackByTwoQueueEmpty(&stq))
//	{
//		printf("%d ", StackByTwoQueueTop(&stq));
//		StackByTwoQueuePop(&stq);
//	}
//	printf("\n");
//}
