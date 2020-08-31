#include <stdio.h>

int fib(int n)
{
	if(n<2)
		return n;
	else
		return fib(n-1)+fib(n-2);
}

int main()
{
	int n,res;
	printf("Enter number n: ");
	scanf("%d",&n);
	if(n<0)
		printf("Error,you entered an invalid number");
	res = fib(5);
	printf("fibonacci(5) = %d\n",res);
	return 0;
}

