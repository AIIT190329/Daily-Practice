#include <iostream>
using namespace std;
int main()
{
	char a;
	int letter = 0, digital = 0, space = 0, other = 0;
	while ((a = getchar()) != '\n')
	{
		if (('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z'))
		{
			letter++;
		}
		else if ('0' <= a && a <= '9')
		{
			digital++;
		}
		else if (a == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	cout << letter << endl;
	cout << space << endl;
	cout << digital << endl;
	cout<< other << endl;
	return 0;
}