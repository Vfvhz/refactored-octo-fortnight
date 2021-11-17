#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int q(int a,int b);
	int base, exponent;
	printf("(©³¼Æ,«ü¼Æ)=");
	scanf_s("%d %d", &base, &exponent);
	printf("%d", q(base, exponent));
}
int q(int a, int b)
{
	if (b==0)
	{
		return 1;
	}
	if (b>=1)
	{
		return a * q(a, b - 1);
	}
}