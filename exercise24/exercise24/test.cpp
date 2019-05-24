#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//strlen碰到\0就结束，a[255]=0
//	system("pause");
//	return 0;
//}

//int main()
//{
//	short num = 32767;
//	short int a = num + 1;
//	printf("%d\n", a);
//	//printf("%d", sizeof(short int));
//	system("pause");
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	cout << sizeof(float) << endl;
//	cout << sizeof(double) << endl;
//	system("pause");
//	return 0;
//}

//进制转换，自己写的一种很麻烦的算法
//int main()
//{
//	int M, N;
//	cin >> M >> N;
//	bool f = false;
//	char a[32] = { 0 };
//	if (N >16 || N < 2 )
//		return 0;
//	if (M < 0)
//	{
//		f = true;
//		a[0] = '-';
//		M = -M;
//	}
//	int i = 31;
//	while (i)
//	{
//		switch (M % N)
//		{
//		case(0) :
//			a[i] = '0';
//			break;
//		case(1) :
//			a[i] = '1';
//			break;
//		case(2) :
//			a[i] = '2';
//			break;
//		case(3) :
//			a[i] = '3';
//			break;
//		case(4) :
//			a[i] = '4';
//			break;
//		case(5) :
//			a[i] = '5';
//			break;
//		case(6) :
//			a[i] = '6';
//			break;
//		case(7) :
//			a[i] = '7';
//			break;
//		case(8) :
//			a[i] = '8';
//			break;
//		case(9) :
//			a[i] = '9';
//			break;
//		case(10) :
//			a[i] = 'A';
//			break;
//		case(11) :
//			a[i] = 'B';
//			break;
//		case(12) :
//			a[i] = 'C';
//			break;
//		case(13) :
//			a[i] = 'D';
//			break;
//		case(14) :
//			a[i] = 'E';
//			break;
//		case(15) :
//			a[i] = 'F';
//			break;
//		}
//		M /= N;
//		if (M == 0)
//			break;
//		--i;
//	}
//	if (f)
//		cout << a[0];
//	for (; i<32; ++i)
//	{
//		cout << a[i];
//	}
//	system("pause");
//	return 0;
//}

//进制转换
//int main()
//{
//	string s, table = "0123456789ABCDEF";
//	int m, n;
//	cin >> m >> n;
//	bool flag = false;
//	// 如果是负数，则转成正数，并标记一下
//	if (m < 0)
//	{
//		m = 0 - m;
//		flag = true;
//	}
//	// 按进制换算成对应的字符添加到s
//	while (m)
//	{
//		s += table[m%n];
//		m /= n;
//	}
//	if (flag)
//		s += '-';
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//	system("pause");
//	return 0;
//}



//计算糖果
//int main()
//{
//	int a, b, c, d, A, B, C;
//	cin >> a >> b >> c >> d;
//	A = (a + c) / 2;
//	B = (b + d) / 2;
//	C = d - B;
//	if (a == A - B && b == B - C && c == A + B && d == B + C)
//		cout << A << " " << B << " " << C << endl;
//	else
//		cout << "No" << endl;
//	return 0;
//
//	system("pause");
//	return 0;
//}


int main()
{


	system("pause");
	return 0;
}