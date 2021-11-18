#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int f(int c);
	printf("費氏數列第幾個：");
	scanf_s("%d", &a);
	printf("%d", f(a));
}
int f(int c)
{
	int temp, fib_1, fib_2, i;
	if (c==0)
	{
		return 0;
	}
	if (c<=2)
	{
		return 1;
	}
	fib_1 = fib_2 = 1;
	for (i=3;i<=c;i++)
	{
		temp = fib_1 + fib_2;
		fib_2 = fib_1;
		fib_1 = temp;
	}
	return temp;
}