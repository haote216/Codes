#include"SeqList.h"
//��ʼ��˳���
void SeqListInit(PSeqList ps)
{
	assert(ps);
	for (ps->_size = 0; ps->_size <= MAX_SIZE; ps->_size++)
	{
		ps->_array[ps->_size] = 0;
	}
	ps->_array[ps->_size] = 0;
}

//β��
void SeqListPushBack(PSeqList ps, DataType data)
{
	assert(ps);
	if (ps->_size >= MAX_SIZE)
	{
		printf("˳����Ѿ�������\n");
		return;
	}
	ps->_array[ps->_size] = data;
	ps->_size++;
}
//βɾ
void SeqListPopBack(PSeqList ps)
{
	assert(ps);
	if (ps->_size == 0)
	{
		printf("˳����Ѿ��ǿյ�\n");
		return;
	}
	ps->_size--;
}

//ͷ��
void SeqListPushFront(PSeqList ps, DataType data)
{
	int i = 0;
	assert(ps);
	if (ps->_size == MAX_SIZE)
	{
		printf("˳����Ѿ�������\n");
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


//ͷɾ
void SeqListPopFront(PSeqList ps)
{
	int i = 0;
	assert(ps);
	if (ps->_size == 0)
	{
		printf("˳����Ѿ��ǿյ�\n");
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


//����λ�ò���Ԫ��
void SeqListInsert(PSeqList ps, size_t pos, DataType data)
{
	int i = 0;
	assert(ps);
	if (pos<0 || pos>MAX_SIZE)
	{
		printf("����λ�ò��Ϸ�\n");
		return;
	}
	for (i = ps->_size - 1; i >= pos - 1; i--)
	{
		ps->_array[i + 1] = ps->_array[i];
	}
	ps->_array[pos - 1] = data;
	ps->_size++;
}

// ɾ������λ���е�Ԫ��
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
	printf("ɾ���ɹ�\n");
}
// ��˳����в���ֵΪdata��Ԫ�أ����ظ�Ԫ����˳����е��±� 
int SeqListFind(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	for (i = 0; i <= ps->_size; i++)
	{
		if (ps->_array[i] == data)
		{
			printf("�ҵ���\n");
			return i;
		}
	}
	printf("û�ҵ�\n");
	return -1;
}



// ɾ��˳�����ֵΪdata��Ԫ�� 
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


// ɾ��˳���������ֵΪdata��Ԫ�� 
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


// �ж�˳����Ƿ�Ϊ�� 
int SeqListEmpty(PSeqList ps)
{
	assert(ps);
	if (ps->_size == 0)
	{
		printf("˳����ǿյ�\n");
		return;
    }
	printf("˳���Ϊ��\n");
}

// ��ȡ˳�����Ԫ�صĸ���
int SeqListSize(PSeqList ps)
{
	assert(ps);

}















