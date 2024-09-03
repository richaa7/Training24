// To calculate Area and Circumference of a circle

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{

	float r;
	float ar, cir;

	printf("Enter the radius of the circle");
	scanf ("%f",&r);

	ar= 2 * PI * r;
	cir= PI * r* r;
	printf("The area is = %f \n",ar);
	printf("The circumference is = %f \n", cir);

	return EXIT_SUCCESS;
}

