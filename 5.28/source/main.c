#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a;
	printf("輸入一個英文字母：");
	scanf_s("%c", &a);
	if (a >91)
	{
		a = a - 32;
	}
	else
	{
		a = a + 32;
	}
	printf("%c",a );
}