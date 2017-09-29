#include<stdio.h>
main()
{
	int a, b, sum;
	scanf_s("%d%d", &a, &b);
	sum = add(a, b);
	printf("sum=%d", sum);
}
int add(int x, int y)
{
	return (x+y);
}