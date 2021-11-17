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
	if (c==0)
	{
		return 0;
	}
	if ((c==1)||(c==2))
	{
		return 1;
	}
	else
	{
		return (f(c - 1) + f(c - 2));
	}
}