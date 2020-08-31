#include <stdio.h>

int main()
{
	int a,b,c,n;
	a=0;
	b=1;
	printf("Enter n: ");
	scanf("%d",&n);
	if(n==0)
		printf("fib(0) = 0");
	else
	{
		for(int i=1;i<n;i++)
		{
			c = a+b;
			a = b;
			b = c;
		}
		printf("fib(%d) = %d",n,b);
	}
	return 0;
}
