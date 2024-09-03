//Write a program that uses the ternary operator (?:) to find the maximum of two numbers.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,max;

	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);


	max=(a>b)?a:b;
	printf(" The greater number is = %d \n", max);

	return EXIT_SUCCESS;
}





