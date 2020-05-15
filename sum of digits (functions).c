#include<stdio.h>
int sum(int x);
int main()
{
	int a;
	printf("input number");
	scanf("%d" , &a);
	printf("sum of digits of %d  is : %d",a,sum(a));
}
int sum(int x)
{
	int sum = 0;
	while (x != 0)
	{
		sum += x % 10;
		x=x/10;
	}
	return sum;
}
