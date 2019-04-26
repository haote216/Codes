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
//	// 这里假设处理了一些其他逻辑
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
//	// 需要注意的是这里应该是sp2.operator->()->_year = 2018;
//	// 本来应该是sp2->->_year这里语法上为了可读性，省略了一个->
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
//	// auto_ptr的问题：当对象拷贝或者赋值后，前面的对象就悬空了
//	// C++98中设计的auto_ptr问题是非常明显的，所以实际中很多公司明确规定了不能使用auto_ptr
//	ap->_year = 2018;
//
//	system("pause");
//	return 0;
//}

// 模拟实现一份简答的AutoPtr,了解原理

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
//	// 一旦发生拷贝，就将ap中资源转移到当前对象中，然后另ap与其所管理资源断开联系，
//	// 这样就解决了一块空间被多个对象使用而造成程序奔溃问题
//	AutoPtr(AutoPtr<T>& ap)
//		: _ptr(ap._ptr)
//	{
//		ap._ptr = NULL;
//	}
//	AutoPtr<T>& operator=(AutoPtr<T>& ap)
//	{
//		// 检测是否为自己给自己赋值
//		if (this != &ap)
//		{
//			// 释放当前对象中资源
//			if (_ptr)
//				delete _ptr;
//			// 转移ap中资源到当前对象中
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
//	// 现在再从实现原理层来分析会发现，这里拷贝后把ap对象的指针赋空了，导致ap对象悬空
//	// 通过ap对象访问资源时就会出现问题。
//	AutoPtr<Date> copy(ap);
//	copy->_year = 2018;
//	ap->_year = 2018;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//unique_ptr<Date> ap(new Date);
//	//// unique_ptr的设计思路非常的粗暴-防拷贝，也就是不让拷贝和赋值。
//	//unique_ptr<Date> ad(new Date);
//	//ad = ap;
//
//	// shared_ptr通过引用计数支持智能指针对象的拷贝
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

// 模拟实现一份简答的SharedPtr,了解原理
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
			// 释放管理的旧资源
			Release();
			// 共享管理新对象的资源，并增加引用计数
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
		// 加锁或者使用加1的原子操作
		_pMutex->lock();
		++(*_pRefCount);
		_pMutex->unlock();
	}
private:
	void Release()
	{
		bool deleteflag = false;
		// 引用计数减1，如果减到0，则释放资源
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
	int* _pRefCount; // 引用计数
	T* _ptr; // 指向管理资源的指针
	mutex* _pMutex; // 互斥锁
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