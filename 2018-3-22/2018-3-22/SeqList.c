#include"SeqList.h"
//初始化顺序表
void SeqListInit(PSeqList ps)
{
	assert(ps);
	for (ps->_size = 0; ps->_size <= MAX_SIZE; ps->_size++)
	{
		ps->_array[ps->_size] = 0;
	}
	ps->_array[ps->_size] = 0;
}

//尾插
void SeqListPushBack(PSeqList ps, DataType data)
{
	assert(ps);
	if (ps->_size >= MAX_SIZE)
	{
		printf("顺序表已经插满了\n");
		return;
	}
	ps->_array[ps->_size] = data;
	ps->_size++;
}
//尾删
void SeqListPopBack(PSeqList ps)
{
	assert(ps);
	if (ps->_size == 0)
	{
		printf("顺序表已经是空的\n");
		return;
	}
	ps->_size--;
}

//头插
void SeqListPushFront(PSeqList ps, DataType data)
{
	int i = 0;
	assert(ps);
	if (ps->_size == MAX_SIZE)
	{
		printf("顺序表已经插满了\n");
		return;
	}
	else if (ps->_size == 0)
	{
		ps->_array[ps->_size] = data;
		ps->_size++;
	}
	else
	{
		
		for (i = ps->_size-1; i >= 0; i--)
		{
			ps->_array[i] = ps->_array[i - 1];
		}
		ps->_array[0] = data;
		ps->_size++;
	}
}


//头删
void SeqListPopFront(PSeqList ps)
{
	int i = 0;
	assert(ps);
	if (ps->_size == 0)
	{
		printf("顺序表已经是空的\n");
		return;
	}
	else if (ps->_size == 1)
	{
		ps->_size--;
	}
	else
	{
		for (i = 0; i < ps->_size; i++)
		{
			ps->_array[i] = ps->_array[i + 1];
		}
		ps->_size--;
	}
}


//任意位置插入元素
void SeqListInsert(PSeqList ps, size_t pos, DataType data)
{
	int i = 0;
	assert(ps);
	if (pos<0 || pos>MAX_SIZE)
	{
		printf("插入位置不合法\n");
		return;
	}
	for (i = ps->_size - 1; i >= pos - 1; i--)
	{
		ps->_array[i + 1] = ps->_array[i];
	}
	ps->_array[pos - 1] = data;
	ps->_size++;
}

// 删除任意位置中的元素
void SeqListErase(PSeqList ps, size_t pos)
{
	int i = 0;
	int j = 0;
	assert(ps);
	for (i = 0; i <= ps->_size; i++)
	{
		if (i == pos)
		{
			for (j = i; j <= ps->_size; j++)
			{
				ps->_array[j] = ps->_array[j + 1];
			}
			ps->_size--;
			return;
		}
	}
	printf("删除成功\n");
}
// 在顺序表中查找值为data的元素，返回该元素在顺序表中的下标 
int SeqListFind(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	for (i = 0; i <= ps->_size; i++)
	{
		if (ps->_array[i] == data)
		{
			printf("找到了\n");
			return i;
		}
	}
	printf("没找到\n");
	return -1;
}



// 删除顺序表中值为data的元素 
void SeqListRemove(PSeqList ps, DataType data)
{
	int i = 0;
	int j = 0;
	assert(ps);
	for (i = 0; i < ps->_size; i++)
	{
		if (ps->_array[i] == data)
		{
			for (j = i; j <= ps->_size-1; j++)
			{
				ps->_array[j] = ps->_array[j + 1];
			}
		}
		ps->_size--;
		return;
	}
}


// 删除顺序表中所有值为data的元素 
void SeqListRemoveAll(PSeqList ps, DataType data)
{
	int i = 0;
	int j = 0;
	assert(ps);
	for (i = 0; i < ps->_size; i++)
	{
		if (ps->_array[i] == data)
		{
			for (j = i; j <= ps->_size - 1; j++)
			{
				ps->_array[j] = ps->_array[j + 1];
			}
			ps->_size--;
			i--;//..............................
		}
	}
}


// 判断顺序表是否为空 
int SeqListEmpty(PSeqList ps)
{
	assert(ps);
	if (ps->_size == 0)
	{
		printf("顺序表是空的\n");
		return;
    }
	printf("顺序表不为空\n");
}

// 获取顺序表中元素的个数
int SeqListSize(PSeqList ps)
{
	assert(ps);

}















