#pragma once

#include<assert.h>

namespace bit
{
	template<class T>
	class Vector
	{

	public:
		typedef T* iterator;
		//typedef const T* const_iterator;


		//���������棬��Ϊ����
		iterator begin()
		{
			return _start;
		}
	
		iterator end()
		{
			return _finish;
		}

		const iterator cbegin()const
		{
			return _start;
		}

		const iterator cend()const 
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
			size_t size = Size();      //�����Size��������ЧԪ�صĴ�С��������ͷŵ��ռ䣬Ȼ����ʹ�ûᵼ�³�����������������б��������ʹ�á�
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
		void Resize(size_t n, const T& val = T());
		void PushBack(const T& x)
		{
			Insert(_finish, x);
		}
		void PopBack(const T& x);
		//Insert������������ʧЧ���⣬����Ϊ���ܹ�����ʹ�õ�������ʹ��ƫ���������posָ���λ�ã������*��������ʹ�õ�������
		//  �͵ô��δ����ã����++pos����Ϊposָ��3��λ�ã������posָ���ǲ������ݵ�λ��
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
			//++pos;    //Ϊʲô��
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