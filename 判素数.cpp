#include <iostream>
using namespace std;
int main()
{
	int num = 0, flag = 1;
	cin >> num;
	for (int i = 2; i <= num; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (num % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "Y" << endl;
			break;
		}
		else
		{
			cout << "N" << endl;
			break;
		}
	}
	return 0;
}
