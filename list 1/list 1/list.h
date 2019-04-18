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

	template<class T>
	struct __ListIterator
	{
		typedef ListNode<T> Node;
		typedef __ListIterator<T> Self;
		Node* _node;

		__ListIterator(Node* node)
			:_node(node)
		{}

		T& operator*()
		{
			return _node->_data;
		}

		T& operator->()
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
		typedef __ListIterator<T> iterator;
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

		List(const List<T>& l);
		List<T>& operator=(List<T> l);
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
			Node* tail = _head->_prev;
			Node* newnode = new Node(x);

			//_head  tail  newnode
			tail->_next = newnode;     
			newnode->_prev = tail;
			_head->_prev = newnode;
			newnode->_next = _head;
		}
		void PopBack();
		void PushFront(const T& x);
		void PopFront();
		void Insert(iterator pos, const T& x);
		void Erase(iterator pos);
		size_t Size();
		bool Empty();

	private:
		Node* _head;
	};


	void PrintList(List<int>& l)
	{
		List<int>::iterator it = l.begin();
		while (it != l.end())
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
}
