#include<iostream>
#include<vector>
using namespace std;

//double Division(int a, int b)
//{
//	// 当b == 0时抛出异常
//	if (b == 0)
//		throw "Division by zero condition!";
//	else
//		return ((double)a / (double)b);
//}
//void Func()
//{
//	int len, time;
//	cin >> len >> time;
//	cout << Division(len, time) << endl;
//}
//
//
//int main()
//{
//	try {
//		Func();
//	}
//	catch (const char* errmsg){
//		cout << errmsg << endl;
//	}
//	catch (...){
//		cout << "unkown exception" << endl;
//	}
//	system("pause");
//	return 0;
//}



int main()
{
	try{
		vector<int> v(10, 5);
		// 这里如果系统内存不够也会抛异常
		//v.reserve(1000000000);
		// 这里越界会抛异常
		v.at(10) = 100;
	}
	catch (const exception& e) // 这里捕获父类对象就可以
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "Unkown Exception" << endl;
	}
	system("pause");
	return 0;
}