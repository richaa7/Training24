//Write a program that converts time in minutes to time in hours and minutes. Use #define or const to create a symbolic constant for 60.

#include<stdio.h>
#include<stdlib.h>
#define H 60

int main()
{
	int tm;
	int hour, min;
	printf("Enter the time in minutes\n");
	scanf("%d", &tm);

	printf("\n");
	min= tm%H;
	hour=(tm-min)/H;

	printf("The time is %d:%d",hour, min);

        printf("\n");

	return EXIT_SUCCESS;
}



 
