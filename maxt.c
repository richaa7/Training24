// Extend the program to find the maximum of three numbers using nested ternary operators.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,max;
	printf("Enter three numbers");
	scanf("%d %d %d",&a, &b, &c);

	max =(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("the greatest number is = %d \n", max);

	return EXIT_SUCCESS;
}

