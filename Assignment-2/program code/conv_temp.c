#include <stdio.h>

float c_to_f(int c)
{
	return (1.8*c + 32);
}

float f_to_c(int f)
{
	return ((f-32)*0.56);
}

int main()
{
	float temp,res;
	int r;
	printf("1.Celsius to Fahrenheit, 2.Fahrenheit to Celsius\nEnter 1 or 2 from above options:");
	scanf("%d",&r);
	if(r == 1)
	{
		printf("\nEnter temperature in Celsius:");
		scanf("%f",&temp);
		res = c_to_f(temp);
		printf("\nConverted temperature from celsius to fahrenheit is %f\n",res);
	}
	else if(r == 2)
	{
		printf("\nEnter temperature in Fahrenheit:");
		scanf("%f",&temp);
		res = f_to_c(temp);
		printf("\nConverted temperature from fahrenheit to celsius is %f\n",res);
	}
	else
		printf("Invalid option\n");
	return 0;
}

