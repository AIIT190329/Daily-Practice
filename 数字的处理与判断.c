//给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
//输入  一个不大于5位的数字
//输出 三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
#include <stdio.h>
void fun(int num)
{
	int index = 0, digits = 0;
	for (int i = 10; i < 10e10; i *= 10)
	{
		digits = num / i;
		if (digits)
		{
			index++;
		}
		else
		{
			index++;
			break;
		}
	}
	printf("%d\n", index);
	int a[10] = { 0 };
	for (int i = 0, j = 10; i < index && j <= 10e10; i++, j *= 10)
	{
		a[i] = num % j / (j / 10);
	}
	for (int i = index - 1; i > -1; i--)
	{
		if (i > 0)
		{
			printf("%d ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	puts("");
	for (int i = 0; i < index; i++)
	{
		printf("%d", a[i]);
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	fun(num);
	return 0;
}