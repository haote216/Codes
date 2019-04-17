#pragma once

#include<assert.h>

namespace bit
{
	template<class T>
	class Vector
	{

	public:
		typedef T* iterator;
		typedef const T* const_iterator;


		//放在类里面，成为内联
		iterator begin()
		{
			return _start;
		}
	
		iterator end()
		{
			return _finish;
		}

		const_iterator cbegin()const
		{
			return _start;
		}

		const_iterator cend()const 
		{
			return _finish;
		}
		size_t Size()const
		{
			return _finish - _start;
		}

		size_t Capacity()const
		{
			return _endofstorage - _start;
		}

		T& operator[](size_t pos)
		{
			assert(pos < Size());
			return _start[pos];
		}

		const T& operator[](size_t pos)const
		{
			assert(pos < Size());
			return _start[pos];
		}
		Vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}

		//Vector<int> v2(v1);
		Vector(const Vector<T>& v);
		Vector<T>& operator=(Vector<T> v);

		~Vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endofstorage = nullptr;
			}
		}

		void Reserve(size_t n)
		{
			size_t size = Size();      //这里的Size（）是有效元素的大小，后面会释放掉空间，然后再使用会导致出错，所以先求出来进行保存后面再使用。
			if (n > Capacity())
			{
				T* tmp = new T[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T)*Size());
					delete[] _start;
				}
			
				_start = tmp;
				_finish = _start + size ;   
				_endofstorage = _start + n;

				
			}
		}
		void Resize(size_t n, const T& val = T())
		{
			if (n > Capacity())
			{
				Reserve(n);
			}
			else
			{
				if(n <= Size())
				{
				_finish = _start + n;
				}
				iterator begin = _finish;
				while (begin < _start + n)
				{
					*begin = val;
					++begin;
				}
				_finish = begin;
			}

		}
		void PushBack(const T& x)
		{
			Insert(_finish, x);
		}
		void PopBack()
		{
			Erase(_finish - 1);
		}


		//Insert会引发迭代器失效问题，所以为了能够继续使用迭代器，使用偏移量计算出pos指向的位置，如果想*或者其他使用迭代器，
		//  就得传参传引用，最后++pos，因为pos指的3的位置，插入后pos指的是插入数据的位置
		void Insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);
			size_t offset = pos - _start;
			if (_finish == _endofstorage)
			{
				size_t newcapacity = Capacity() == 0 ? 2 : Capacity() * 2;
				Reserve(newcapacity);
				pos = _start + offset;
			}
			iterator end = _finish;
			while (end > pos)
			{
				*end = *(end - 1);
				--end;
			}
			*pos = x;
			//++pos;   
			++_finish;
		}

		iterator Erase(iterator pos)
		{
			assert(pos < _finish);
			iterator begin = pos;
			while (begin < _finish - 1)
			{
				*begin = *(begin + 1);
				++begin;
			}
			--_finish;
			return pos;
		}

	private:
		//T* _array;
		//size_t _size;
		//size_t _capacity;

		T* _start;
		T* _finish;
		T* _endofstorage;
	};

}