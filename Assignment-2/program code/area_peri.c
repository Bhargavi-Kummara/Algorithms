#include <stdio.h>

int area(int s)
{
	return s*s;
}

int peri(int s)
{
	return 4*s;
}

int main()
{
	int len,res,i;
	printf("Enter length of the square:");
	scanf("%d",&len);
	printf("1.Find area  2.Find perimeter\nEnter one option from above:");
	scanf("%d",&i);
	if(i==1)
	{
		res = area(len);
		printf("\nArea of square is %d\n",res);
	}
	else if(i==2)
	{
		res = peri(len);
		printf("\nPerimeter of square is %d\n",res);
	}
	else
		printf("Invalid option");
	return 0;
}
