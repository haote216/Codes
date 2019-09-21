#pragma once
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//≤Â»Î≈≈–Ú
//void InsertSort(int* a, int n)
//{
//	for (int i = 1; i < n; ++i)
//	{
//		int key = a[i];
//		int end = i - 1;
//
//		while (end >= 0 && key < a[end])
//		{
//			a[end + 1] = a[end];
//			--end;
//		}
//		a[end + 1] = key;
//	}
//}

//œ£∂˚≈≈–Ú
//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = gap; i < n; ++i)
//		{
//			int key = a[i];
//			int end = i - gap;
//
//			while (end >= 0 && key < a[end])
//			{
//				a[end + gap] = a[end];
//				end -= gap;
//			}
//			a[end + gap] = key;
//		}
//	}
//
//}



//—°‘Ò≈≈–Ú
//void SelectSort(int* a, int n)
//{
//	assert(a);
//	int begin = 0, end = n - 1;
//	while (begin < end)
//	{
//		int minindex = begin, maxindex = begin;
//		for (int i = begin; i <= end; ++i)
//		{
//			if (a[i] > a[maxindex])
//				maxindex = i;
//			if (a[i] < a[minindex])
//				minindex = i;
//		}
//		Swap(&a[begin], &a[minindex]);
//		if (begin == maxindex)
//			maxindex = minindex;
//		Swap(&a[end], &a[maxindex]);
//
//		++begin, --end;
//
//	}
//}


//∂—≈≈–Ú
//void HeapAdjust(int*a, int parent, int n)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n  && a[child + 1] > a[child])
//			child += 1;
//
//		if (a[parent] < a[child])
//		{
//			Swap(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			return;
//	}
//}
//
//void HeapSort(int*a, int n)
//{
//	//¥¥Ω®∂—
//	int end = n - 1;
//	int i = ((n - 2) >> 1);
//	for (; i >= 0; --i)
//		HeapAdjust(a, i, n);
//
//	//µ˜’˚-->…æ≥˝
//	while (end)
//	{
//		Swap(&a[0], &a[end]);
//		HeapAdjust(a, 0, end);
//		--end;
//	}
//}



//√∞≈›≈≈–Ú
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//
//	int end = n;
//	while (end > 0)
//	{
//		for (int i = 1; i < end; ++i)
//		{
//			if (a[i] < a[i - 1])
//				Swap(&a[i], &a[i - 1]);
//		}
//		--end;
//	}
//}


////øÏÀŸ≈≈–Ú
////1.hoare∞Ê±æ [left,right]
//int PartSort1(int* a, int begin, int end)
//{
//	int key = a[end];
//	int keyindex = end;
//	while (begin < end)
//	{
//		//’“¥Ûµƒ
//		while (begin < end && a[begin] <= key)
//			++begin;
//		//’“–°µƒ
//		while (begin < end && a[end] >= key)
//			--end;
//
//		Swap(&a[begin], &a[end]);
//	}
//	Swap(&a[begin], &a[keyindex]);
//	return begin;
//}
//
////2.ÃÓø”∑®
//int PartSort2(int* a,int begin, int end)
//{
//	int key = a[end]; 
//	while (begin < end)
//	{
//		while (begin < end && a[begin] <= key)
//			++begin;
//		a[end] = a[begin];
//
//		while (begin < end && a[end] >= key)
//			--end;
//		a[begin] = a[end];
//	}
//	a[begin] = key;
//	return begin;
//}
//
////3.«∞∫Û÷∏’Î
//int PartSort3(int* a, int begin, int end)
//{
//	int prev = begin - 1;
//	int cur = begin;
//	int key = a[end];
//	while (cur < end)
//	{
//		if (a[cur] < key && ++prev != cur)
//			Swap(&a[cur], &a[prev]);
//
//		++cur;
//	}
//	Swap(&a[++prev], &a[end]);
//	return prev;
//}
//
//
//void QuickSort(int* a, int left, int right)
//{
//	if (left >= right)
//		return;
//	assert(a);
//	
//	int div = PartSort2(a, left, right);
//	//[left,div-1]  div   [div+1,right]
//	QuickSort(a, left, div - 1);
//	QuickSort(a, div + 1, right);
//}


//πÈ≤¢≈≈–Ú
void Merge(int* a, int begin1,int end1, int begin2,int end2,int* tmp)
{
	int start = begin1;
	int n = end2 - begin1 + 1;
	int index = begin1;
	while (begin1<=end1 && begin2<=end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}
	while (begin1 <= end1)
		tmp[index++] = a[begin1++];
	while (begin2 <= end2)
		tmp[index++] = a[begin2++];
	memcpy(a + start, tmp + start, sizeof(int)*n);
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
		return;
	int mid = begin + ((end - begin) >> 1);
	//[begin,mid]   [mid+1,end]
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	Merge(a, begin, mid, mid + 1, end, tmp);
}



void MergeSort(int* a, int n)
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}






