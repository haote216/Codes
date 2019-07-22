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

void QueueByTwoStackPush(QueueByTwoStack* qts, DataType x)
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
DataType QueueByTwoStackFront(QueueByTwoStack* qts)
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

void TestQueueByTwoStack()
{
	QueueByTwoStack qts;
	QueueByTwoStackInit(&qts);
	QueueByTwoStackPush(&qts, 1);
	QueueByTwoStackPush(&qts, 2);
	QueueByTwoStackPush(&qts, 3);

	QueueByTwoStackPop(&qts);
	QueueByTwoStackPop(&qts);

	QueueByTwoStackPush(&qts, 4);
	QueueByTwoStackPush(&qts, 5);

	while (QueueByTwoStackEmpty(&qts))
	{
		printf("%d\n", QueueByTwoStackFront(&qts));
		QueueByTwoStackPop(&qts);
	}
}



