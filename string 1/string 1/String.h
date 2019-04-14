#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<assert.h>
#include<string>
using namespace std;
/*class String
{
public:
	//String()
	//	:_str(new char[1])
	//{
	//	_str[0] = '\0';
	//}
	String(char* str ="123")
		:_str(new char[strlen(str) + 1])
	{
		strcpy(_str, str);        //while(*dst ++ = *src ++)
	}

	//1.传统写法
	//s3(s2) 深拷贝
	//String(const String& s)
	//	:_str(new char[strlen(s._str)+1])
	//{
	//	strcpy(_str, s._str);
	//}

	
	//s1 = s2
	//String& operator=(const String& s)
	//{
	//	if (this != &s)
	//	{
	//		delete[] _str;
	//		_str = new char[strlen(s._str) + 1];
	//		strcpy(_str, s._str);
	//	}
	//	return *this;
	//}

	//2.现代写法
	String(const String& s)
		:_str (nullptr)
	{
		String tmp(s._str);
		swap(_str, tmp._str);
	}
	//String& operator=(const String& s)
	//{
	//	if (this != &s)
	//	{
	//		String tmp(s._str);
	//		swap(_str, tmp._str);
	//	}
	//	return *this;
	//}
	String& operator=(String s)
	{
		swap(_str, s._str);
		return *this;
	}
	
	~String()
	{
		if (_str)
			delete[] _str;
	}
	char* c_str()
	{
		return _str;
	}
private:
	char* _str;
};
*/

namespace bit
{
class String
{
public:

	static const size_t npos;
	//迭代器
	typedef char* iterator;
	typedef const char* const_iterarot;
	iterator begin()
	{
		return _str;
	}
	iterator end()
	{
		return _str + _size;
	}



	//在类里面实现，默认是inline
	String(const char* str = "")
	{
		_size = strlen(str);
		_capacity = _size > 15 ? _size : 15;
		_str = new char[_capacity + 1];
		strcpy(_str, str);
	}

	~String()
	{
		delete[] _str;
		_str = nullptr;
		_size = _capacity = 0 ;
	}

	String(const String& s)
		:_str(nullptr)
		, _size(0)
		, _capacity(0)
	{
		String tmp(s._str);
		Swap(tmp);
	}

	//s1  =   s2
	String& operator=(String s)
	{
		Swap(s);
		return *this;
	}

	char& operator[](size_t pos)
	{
		assert(pos < _size);
		return _str[pos];
	}

	const char& operator[](size_t pos) const
	{
		assert(pos < _size);
		return _str[pos];
	}

	size_t Size() const
	{
		return _size;
	}

	size_t Capacity() const
	{
		return _capacity;
	}

	void Swap(String& s)
	{
		swap(_str, s._str);
		swap(_size, s._size);
		swap(_capacity, s._capacity);
	}

	const char* c_str()
	{
		return _str;
	}

	void Reserve(size_t n);
	void Resize(size_t n, char ch = '0');
	void PushBack(char ch);
	void Append(const char* str);
	String& operator+= (char ch);
	String& operator+= (const char* str);
	size_t Find(char ch, size_t pos = 0);
	size_t RFind(char ch, size_t pos = npos);
	size_t Find(const char* str, size_t pos = 0);
	String Substr(size_t pos, size_t len);
	void Insert(size_t pos, char ch);
	void Insert(size_t pos, const char* str);
	void Erase(size_t pos, size_t len = npos);
	

	//扩展学习
	//operator<<();
	//operator>>();
	//operator<();
	//operator>();

private:
	char* _str;
	size_t _size;
	size_t _capacity;   //表示实际能存储数据的空间

};
}