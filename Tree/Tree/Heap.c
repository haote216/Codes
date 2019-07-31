#include"Heap.h"

void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType x = *a;
	*a = *b;
	*b = x;
}
void AdjustDown(HPDataType* a,int n,int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child +1 < n  &&  a[child + 1] > a[child])
			++child;
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}	
	}
}
void AdjustUp(HPDataType* a, int n, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
}
void HeapInit(Heap* hp,HPDataType* a,int n)
{
	assert(hp && a);
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	hp->_size = n;
	hp->_capacity = n;

	for (int i = 0; i < n; ++i)
	{
		hp->_a[i] = a[i];
	}
	for (int i = (n - 2) / 2; i>=0; --i)
	{
		AdjustDown(hp->_a, hp->_size, i);
	}
}



void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if (hp->_capacity == hp->_size)
	{
		hp->_capacity *= 2;
		hp->_a = (HPDataType*)realloc(hp->_a, sizeof(HPDataType)*hp->_capacity);
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	AdjustUp(hp->_a, hp->_size, hp->_size - 1);
}
void HeapPop(Heap* hp)
{
	assert(hp);
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);
}
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp)
{
	return hp->_size;
}
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0 ? 0 : 1;
}

void Print(Heap* hp)
{
	for (int i = 0; i < hp->_size; ++i)
		printf("%d ", hp->_a[i]);
	printf("\n");
}

void TestHeap()
{
	int arr[] = { 53, 17, 78, 9, 45, 65, 87, 23, 31 };
	Heap hp;
	HeapInit(&hp, arr, sizeof(arr) / sizeof(int));
	Print(&hp);

	HeapPush(&hp, 10);
	Print(&hp);

	HeapPush(&hp, 100);
	Print(&hp);

	HeapPop(&hp);
	Print(&hp);
}