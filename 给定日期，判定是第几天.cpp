#include <iostream>
using namespace std;
int main()
{
	int year = 0, month = 0, day = 0, days = 0;
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << "请输入年份:"; cin >> year;
	cout << "请输入月份:"; cin >> month;
	cout << "请输入天数:"; cin >> day;
	if ((year % 100 == 0) || (year % 4 == 0 && year % 100 != 0)) { months[1] = 29; }
	for (int i = month - 2; i > -1; i--)
	{
		days += months[i];
	}
	days += day;
	cout << "当前输入的日期为:" << year << "年" << month << "月" << day << "日," << "它是" << year << "年当中的第" << days << "天!" << endl;
	return 0;
}


请输入年份:2020
请输入月份 : 7
请输入天数 : 23
当前输入的日期为 : 2020年7月23日, 它是2020年当中的第205天!

D : \Program Files(x86)\Microsoft Visual Studio Projects\C++\Empty\Debug\Empty.exe(进程 16276)已退出，代码为 0。
按任意键关闭此窗口. . .