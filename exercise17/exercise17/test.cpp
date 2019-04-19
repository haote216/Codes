#include<iostream>
using namespace std;

//const size_t N = 100;

//template<class T, size_t N>
//class Array
//{
//
//
//public:
//	T& operator[](size_t i)
//	{
//		assert(i < N);
//		return _arr[i];
//	}
//private:
//	T _arr[N];
//
//};


//template<int N>
//class Sum
//{
//public:
//	enum {RET = N + Sum<N-1>::RET};
//};
//
//template<>
//class Sum<1>
//{
//public:
//	enum {RET = 1};
//};



struct __TrueType
{
	bool get()
	{
		return true;
	}
};

struct __FalseType
{
	bool get()
	{
		return false;
	}
};

template<class T>
struct TypeTraits
{
	typedef __FalseType IsPodType;
};

template<>
struct TypeTraits<int>
{
	typedef __TrueType IsPodType;
};
template<>
struct TypeTraits<char>
{
	typedef __TrueType IsPodType;
};
template<>
struct TypeTraits<double>
{
	typedef __TrueType IsPodType;
};

template<class T>
T* Copy(T* dst, const T* src, size_t n)
{
	//RTTI
	if (TypeTraits<T>::IsPodType().get())
	{
		cout << "memcpy()                  " << typeid(T).name() << endl;
		memcpy(dst, src, sizeof(T)*n);
	}
	else
	{
		for (size_t i = 0; i < n; ++i)
		{
			cout << "for + operator=                " << typeid(T).name() << endl;
			dst[i] = src[i];
		}
	}
	return dst;
}


int main()
{

	int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int a2[10];
	Copy(a2, a1, 10);

	string s1[] = { "1111", "2222", "3333", "4444" };
	string s2[4];
	Copy(s2, s1, 4);

	//cout << Sum<500>::RET << endl;

	/*Array<int, 10> a1;
	Array<int, 100> a2;*/
	system("pause");
	return 0;
}