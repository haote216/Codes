#include"Date.h"

int main()
{
	Date d;
	Date d1(2019, 1, 13);
	Date d2(2019, 3, 12);
	Date d3(2019, 3, 13);
	int ret = d3 - d1;
	cout << ret << endl;
	system("pause");
	return 0;
}