#include <stdio.h>
#include <math.h>

int main()
{
	float p,n,r,amt,t;
	n = 12;
	printf("Enter principal investment p: ");
	scanf("%f",&p);
	printf("Enter interest rate r: ");
	scanf("%f",&r);
	printf("enter no: of time periods t: ");
	scanf("%f",&t);
	amt = (p*pow(1+r/(100*n),n*t) - p);
	printf("Compound interest is %f",amt);
	printf("\n");
	return 0;
}
