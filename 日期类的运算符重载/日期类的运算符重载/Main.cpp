#include"Date.h"

int main()
{
	Date d1(2019, 1, 13);
	d1.Print();

	

	Date d2(2008, 8, 8);
	int i = d1 - d2;
	cout << i << endl;

	system("pause");
	return 0;
}