#include <stdio.h>

int main()
{
	int n,sum;
	printf("Enter no: of terms to sum: ");
	scanf("%d",&n);
	sum = (n*(n+1))/2;
	printf("The series sum upto %d is %d",n,sum);
	printf("\n");
	return 0;
}
	
