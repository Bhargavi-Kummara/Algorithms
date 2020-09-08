#include <stdio.h>

int main()
{
	int a,b,temp;
	printf("enter two numbers a and b: ");
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("value of a is %d, b is %d\n",a,b);
	return 0;
}
