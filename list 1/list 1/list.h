#pragma once 


namespace bit
{
	template<class T>
	struct ListNode
	{
		T _data;
		ListNode<T>* _next;
		ListNode<T>* _prev;

		ListNode(const T& data =T())
			:_data(data)
			, _next(nullptr)
			, _prev(nullptr)
		{}
	};

	template<class T, class Ref, class Ptr>
	struct __ListIterator
	{
		typedef ListNode<T> Node;
		typedef __ListIterator<T, Ref, Ptr> Self;
		Node* _node;

		__ListIterator(Node* node)
			:_node(node)
		{}

		Ref operator*()//返回引用，可以对迭代器进行修改。   如果值返回，修改的是临时变量，会报错。
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &(operator*());
		}

		//++it     it.operator++(&it)
		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		//it++  it.operator(&it, 0)
		Self operator++(int)
		{
			Self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		//Self operator+(size_t n)


		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator--(int)
		{
			Self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}

		bool operator!=(const Self& it)
		{
			return _node != it._node;
		}

		bool operator==(const Self& it)
		{
			return _node == it._node;
		}
	};

	template<class T>
	class List
	{
		typedef ListNode<T> Node;
	public:
		typedef __ListIterator<T, T&, T*> iterator;
		typedef __ListIterator<T, const T&, const T*> const_iterator;

		const_iterator begin()const
		{
			return const_iterator(_head->_next);
		}

		const_iterator end()const
		{
			return const_iterator(_head);
		}
		
		
		iterator begin()//小写的begin为的是支持auto的语法糖
		{
			return iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		List()
			:_head(new Node(T()))
		{
			_head->_next = _head;
			_head->_prev = _head;
		}

		List(const List<T>& l)
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;

			const_iterator it = l.begin();
			while (it != l.end())
			{
				PushBack(*it);
				++it;
			}
		}
		List<T>& operator=(List<T> l)
		{
			swap(this->_head, l->_head);
			return *this;
		}
		~List()
		{
			Clear();
			delete _head;
			_head = nullptr;
		}

		void Clear()
		{
			iterator it = begin();
			while (it != end())
			{
				iterator del = it;
				++it;
				delete del._node;
			}
			_head->_next = _head;
			_head->_prev = _head;
		}

		void PushBack(const T& x)
		{
			//Node* tail = _head->_prev;
			//Node* newnode = new Node(x);

			////_head  tail  newnode
			//tail->_next = newnode;     
			//newnode->_prev = tail;
			//_head->_prev = newnode;
			//newnode->_next = _head;

			Insert(end(), x);
		}
		void PopBack()
		{
			Erase(--end());
		}
		void PushFront(const T& x)
		{
			Insert(begin(), x);
		}
		void PopFront()
		{
			Erase(begin());
		}
		void Insert(iterator pos, const T& x)
		{
			Node* prev = pos._node->_prev;
			Node* newnode = new Node(x);
			Node* cur = pos._node;

			prev->_next = newnode;
			newnode->_prev = prev;
			newnode->_next = cur;
			cur->_prev = newnode;
		}

		void Erase(iterator pos)
		{
			Node* prev = pos._node->_prev;
			Node* next = pos._node->_next;

			prev->_next = next;
			next->_prev = prev;

			delete pos._node;

			pos = iterator(prev);
		}
		size_t Size()
		{
			size_t n = 0;
			iterator it = begin();
			while (it != end())
			{
				++n;
				++it;
			}
			return n;
		}
		bool Empty()
		{
			return _head == _head->_next;
		}

	private:
		Node* _head;
	};


	void PrintList(const List<int>& l)
	{
		List<int>::const_iterator it = l.begin();
		while (it != l.end())
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	class Date
	{
	public:
		int _year = 2018 ;
		int _month = 1;
		int _day = 1;
	};
}
