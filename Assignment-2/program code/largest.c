#include <stdio.h>

int main()
{
	int a,b,c;
	printf("enter a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is largest",a);
		else if(c>a)
			printf("%d is largest",c);
		else
			printf("a and c values are same");
	}
	else if(b>a)
	{
		if(b>c)
			printf("%d is largest",b);
		else if(c>b)
			printf("%d is largest",c);
		else
			printf("b and c values are same"); 
	}
	else if(a<c)
	{
		printf("%d is largest",c);
	}
	else
		printf("All the values are  same");
	printf("\n");
	return 0;
}
