//Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). (Formula bmi =weight/(height * height)

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float w,h,bmi;
	printf("Enter the height and weight\n");
	scanf("%f %f", &w,&h);
	
	bmi=w/(h*h);

	printf("The bmi will be = %f",bmi);

	return EXIT_SUCCESS;
}

