#include<iostream>
#include <vector>
#include<memory>
using namespace std;


//void _MergeSort(int* a, int left, int right, int* tmp)
//{
//	if (left >= right) return;
//	int mid = left + ((right - left) >> 1);
//	// [left, mid]
//	// [mid+1, right]
//	_MergeSort(a, left, mid, tmp);
//	_MergeSort(a, mid + 1, right, tmp);
//	int begin1 = left, end1 = mid;
//	int begin2 = mid + 1, end2 = right;
//	int index = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (a[begin1] < a[begin2])
//			tmp[index++] = a[begin1++];
//		else
//			tmp[index++] = a[begin2++];
//	}
//	while (begin1 <= end1)
//		tmp[index++] = a[begin1++];
//	while (begin2 <= end2)
//		tmp[index++] = a[begin2++];
//	memcpy(a + left, tmp + left, sizeof(int)*(right - left + 1));
//}
//
//void MergeSort(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	_MergeSort(a, 0, n - 1, tmp);
//	// ������账����һЩ�����߼�
//	vector<int> v(1000000000, 10);
//	// ...
//	// free(tmp);
//}
//int main()
//{
//	int a[5] = { 4, 5, 2, 3, 1 };
//	MergeSort(a, 5);
//	system("pause");
//	return 0;
//}


//template<class T>
//class Smartptr
//{
//public:
//	Smartptr(T* ptr = nullptr)
//		:_ptr(ptr)
//	{}
//
//	Smartptr(Smartptr<T>& ap)
//		:_ptr(ap._ptr)
//	{
//		ap._ptr = nullptr;
//	}
//
//	Smartptr<T>& operator=(Smartptr<T>& ap)
//	{
//		if (*this != &ap)
//		{
//			if (_ptr)
//				delete _ptr;
//			_ptr = ap._ptr;
//			ap._ptr = nullptr;
//		}
//		return *this;
//	}
//
//	~Smartptr()
//	{
//		if (_ptr)
//			delete _ptr;
//	}
//
//	T& operator*()
//	{
//		return *_ptr;
//	}
//
//	T* operator->()
//	{
//		return _ptr;
//	}
//private:
//	T* _ptr;
//};
//
//struct Date
//{
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	int *p1 = new int;
//	*p1 = 10;
//	Smartptr<int> sp1(new int);
//	*sp1 = 10;
//	cout << *sp1 << endl;
//	Smartptr<Date> sp2(new Date);
//	// ��Ҫע���������Ӧ����sp2.operator->()->_year = 2018;
//	// ����Ӧ����sp2->->_year�����﷨��Ϊ�˿ɶ��ԣ�ʡ����һ��->
//	sp2->_year = 2018;
//	sp2->_month = 1;
//	sp2->_day = 1;
//	cout << sp2->_year << endl;
//
//	delete p1;
//
//	system("pause");
//	return 0;
//}


//class Date
//{
//public:
//	Date() { cout << "Date()"  << endl; }
//	~Date(){ cout << "~Date()" << endl; }
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	auto_ptr<Date> ap(new Date);
//	auto_ptr<Date> ad(new Date);
//	ad = ap;
//	//auto_ptr<Date> copy(ap);
//	// auto_ptr�����⣺�����󿽱����߸�ֵ��ǰ��Ķ����������
//	// C++98����Ƶ�auto_ptr�����Ƿǳ����Եģ�����ʵ���кܶ๫˾��ȷ�涨�˲���ʹ��auto_ptr
//	ap->_year = 2018;
//
//	system("pause");
//	return 0;
//}

// ģ��ʵ��һ�ݼ���AutoPtr,�˽�ԭ��

//class Date
//{
//public:
//	Date() { cout << "Date()"  << endl; }
//	~Date(){ cout << "~Date()" << endl; }
//	int _year;
//	int _month;
//	int _day;
//};

//template<class T>
//class AutoPtr
//{
//public:
//	AutoPtr(T* ptr = NULL)
//		: _ptr(ptr)
//	{}
//	~AutoPtr()
//	{
//		if (_ptr)
//			delete _ptr;
//	}
//	// һ�������������ͽ�ap����Դת�Ƶ���ǰ�����У�Ȼ����ap������������Դ�Ͽ���ϵ��
//	// �����ͽ����һ��ռ䱻�������ʹ�ö���ɳ���������
//	AutoPtr(AutoPtr<T>& ap)
//		: _ptr(ap._ptr)
//	{
//		ap._ptr = NULL;
//	}
//	AutoPtr<T>& operator=(AutoPtr<T>& ap)
//	{
//		// ����Ƿ�Ϊ�Լ����Լ���ֵ
//		if (this != &ap)
//		{
//			// �ͷŵ�ǰ��������Դ
//			if (_ptr)
//				delete _ptr;
//			// ת��ap����Դ����ǰ������
//			_ptr = ap._ptr;
//			ap._ptr = NULL;
//		}
//		return *this;
//	}
//	T& operator*() { return *_ptr; }
//	T* operator->() { return _ptr; }
//private:
//	T* _ptr;
//};
//int main()
//{
//	AutoPtr<Date> ap(new Date);
//	// �����ٴ�ʵ��ԭ����������ᷢ�֣����������ap�����ָ�븳���ˣ�����ap��������
//	// ͨ��ap���������Դʱ�ͻ�������⡣
//	AutoPtr<Date> copy(ap);
//	copy->_year = 2018;
//	ap->_year = 2018;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//unique_ptr<Date> ap(new Date);
//	//// unique_ptr�����˼·�ǳ��Ĵֱ�-��������Ҳ���ǲ��ÿ����͸�ֵ��
//	//unique_ptr<Date> ad(new Date);
//	//ad = ap;
//
//	// shared_ptrͨ�����ü���֧������ָ�����Ŀ���
//	shared_ptr<Date> a (new Date);
//	shared_ptr<Date> b (a );
//	shared_ptr<Date> c(b);
//	cout << "ref count:" << a.use_count() << endl;
//	cout << "ref count:" << b.use_count() << endl;
//	cout << "ref count:" << c.use_count() << endl;
//
//	system("pause");
//	return 0;
//}

// ģ��ʵ��һ�ݼ���SharedPtr,�˽�ԭ��
#include <thread>
#include <mutex>
template <class T>
class SharedPtr
{
public:
	SharedPtr(T* ptr = nullptr)
		: _ptr(ptr)
		, _pRefCount(new int(1))
		, _pMutex(new mutex)
	{}
	~SharedPtr() { Release(); }
	SharedPtr(const SharedPtr<T>& sp)
		: _ptr(sp._ptr)
		, _pRefCount(sp._pRefCount)
		, _pMutex(sp._pMutex)
	{
		AddRefCount();
	}
	// sp1 = sp2
	SharedPtr<T>& operator=(const SharedPtr<T>& sp)
	{
		//if (this != &sp)
		if (_ptr != sp._ptr)
		{
			// �ͷŹ���ľ���Դ
			Release();
			// ��������¶������Դ�����������ü���
			_ptr = sp._ptr;
			_pRefCount = sp._pRefCount;
			_pMutex = sp._pMutex;
			AddRefCount();
		}
		return *this;
	}
	T& operator*() { return *_ptr; }
	T* operator->() { return _ptr; }
	int UseCount() { return *_pRefCount; }
	T* Get() { return _ptr; }
	void AddRefCount()
	{
		// ��������ʹ�ü�1��ԭ�Ӳ���
		_pMutex->lock();
		++(*_pRefCount);
		_pMutex->unlock();
	}
private:
	void Release()
	{
		bool deleteflag = false;
		// ���ü�����1���������0�����ͷ���Դ
		_pMutex.lock();
		if (--(*_pRefCount) == 0)
		{
			delete _ptr;
			delete _pRefCount;
			deleteflag = true;
		}
		_pMutex.unlock();
		if (deleteflag == true)
			delete _pMutex;
	}
private:
	int* _pRefCount; // ���ü���
	T* _ptr; // ָ�������Դ��ָ��
	mutex* _pMutex; // ������
};
int main()
{
	SharedPtr<int> sp1(new int(10));
	SharedPtr<int> sp2(sp1);
	*sp2 = 20;
	cout << sp1.UseCount() << endl;
	cout << sp2.UseCount() << endl;
	SharedPtr<int> sp3(new int(10));
	sp2 = sp3;
	cout << sp1.UseCount() << endl;
	cout << sp2.UseCount() << endl;
	cout << sp3.UseCount() << endl;
	sp1 = sp3;
	cout << sp1.UseCount() << endl;
	cout << sp2.UseCount() << endl;
	cout << sp3.UseCount() << endl;

	system("pause");
	return 0;
}