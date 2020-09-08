#include <stdio.h>

int main()
{
	int a,b;
	printf("enter a and b: ");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d is the smallest",b);
	else if(a == b)
		printf("Both are same");
	else
		printf("%d is the smallest",a);
	printf("\n");
	return 0;
}
