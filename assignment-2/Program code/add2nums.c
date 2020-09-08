#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int main()
{
	int a,b,res;
	printf("Enter the numbers to be summed:");
	scanf("%d%d",&a,&b);
	res = add(a,b);
	printf("Sum is %d\n",res);
	return 0;
}
