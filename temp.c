//write a  C program that performs temperature conversions between Celsius to Fahrenheit.

#include<stdio.h>
#include<stdlib.h>
 int main()
{
	float tc;
	float tf;
	printf (" Enter the temperature in celcius \n");
	 scanf("%f",&tc);
	 
	 tf= tc*(9/5)+32;

	 printf("The temperature in farenheit is = %f", tf);
	  return EXIT_SUCCESS;
}


