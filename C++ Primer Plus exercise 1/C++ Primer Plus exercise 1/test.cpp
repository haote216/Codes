#include<iostream>
using namespace std;
void fun(const int& a)
{
	cout << a << endl;
}

int main()
{
	long i = 10;
	fun(8);
	cout << i << endl;
	system("pause");
	return 0;
}