#include <iostream>
using namespace std;
int main()
{
	int m = 0, n = 0, x = 0, y = 0, z = 0;
	cout << "请输入两个数:";cin >> m >> n;
	x = m, y = n, z = m % n;
	while (z)
	{
		m = n;
		n = z;
		z = m % n;
	}
	cout<<"最大公约数:"<<x*y/n<<'\n'<<"最小公倍数:"<<n<<endl;
	return 0;
}