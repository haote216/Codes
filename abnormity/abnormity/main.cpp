#include<iostream>
#include<vector>
using namespace std;

//double Division(int a, int b)
//{
//	// ��b == 0ʱ�׳��쳣
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
		// �������ϵͳ�ڴ治��Ҳ�����쳣
		//v.reserve(1000000000);
		// ����Խ������쳣
		v.at(10) = 100;
	}
	catch (const exception& e) // ���ﲶ�������Ϳ���
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