#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name: " << _name << endl;
//		//cout << "age: " << _age << endl;
//	}
//	string _name = "Haote";
//
//private:
//	int _age = 22;
//};
//
//
//class Student: public Person
//{
//protected:
//	int _stdid;
//};
//
//class Teacher :public Person
//{
//protected:
//	int _jobid;
//};
//
//
//
//int main()
//{
//
//	Student s;    //������
//
//	Person p = s; //p�ǻ������
//	Person* ptr = &s;
//	Person& r = s;
//
//	p._name = "123";
//	s._name = "456";
//	r._name = "789";
//
//	p.Print();
//	ptr->Print();
//	r.Print();
//
//	//s = p;��������ܸ�ֵ�����������
//
//	Student* sptr = (Student*)ptr;
//
//
//	system("pause");
//	return 0;
//}


//class Person
//{
//public:
//	Person(const char* name = "haote1")
//		: _name(name)
//	{
//		cout << "Person()" << " " << _name << endl;
//	}
//	Person(const Person& p )
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << " " <<p._name << endl;
//	}
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:	
//	string _name; // ����
//};
//
//class Student : public Person
//{
//public:
//		Student(const char* name = "haote2", int num = 217)
//		: Person(name)
//		, _num(num)
//	{
//		cout << _name << " " << _num << endl;
//	}
//
//	Student(const Student& s)
//		: Person(s)
//		, _num(s._num)
//	{}
//
//	Student& operator = (const Student& s)
//	{
//		cout << "Student& operator= (const Student& s)" << endl;
//		if (this != &s)
//		{
//			Person::operator =(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _num; //ѧ��
//};
//int main()
//{
//	Student s1;
//	Student s2(s1);
//
//
//	system("pause");
//	return 0;
//}

//class Student;
//
//class Person
//{
//public:
//	friend void D(const Person& p, const Student& s);
//protected:
//	string _name;
//};
//
//class Student :public Person
//{
//public:
//	friend void D(const Person& p, const Student& s);
//protected:
//	int _stuNum;
//};
//
//void D(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	D(p, s);
//	return 0;
//}

//class Person
//{
//public:
//	Person() { ++_count; ++_num; }
//protected:
//	string _name; // ����
//public:
//	static int _count; // ͳ���˵ĸ�����
//	static int _num;
//};
//int Person::_count = 0;
//int Person::_num = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // �о���Ŀ
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " ���� :" << Person::_count << endl;
//	cout << " ���� :" << Student::_count << endl;
//	cout << " ���� :" << Graduate::_count << endl;
//	cout << Person::_num << endl;
//	Student::_count = 0;
//	cout << " ���� :" << Person::_count << endl;
//
//	system("pause");
//	return 0;
//}




//class Person
//{
//public:
//	string _name; // ����
//};
//
//class Student : public Person
//{
//protected:
//	int _num; //ѧ��
//};
//
//class Teacher : public Person
//{
//protected:
//	int _id; // ְ�����
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//int main()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	//a._name = "peter";     //������
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	a.Student::_name = "С��";
//	a.Teacher::_name = "����";
//
//	cout << a.Student::_name << endl;
//	cout << a.Teacher::_name << endl;
//
//	system("pause");
//	return 0;
//}


class A
{
public:
	int _a;
};

class B : virtual public A
{
public:
	int _b;
};

class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C
{
public:
	int _d;
};

int main()
{
	D d;
	cout << sizeof(d) << endl;
	d.B::_a = 1;
	d.C::_a = 2;
	//d._b = 3;
	//d._c = 4;
	//d._d = 5;
	system("pause");
	return 0;
}