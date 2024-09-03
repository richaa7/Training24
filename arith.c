//Write a program to perform simple arithmetic operation on two integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a, &b);

	printf("The sum = %d \n", a+b);
	printf("The difference = %d \n",a-b);
	printf("The multiplication =%d \n",a*b);
	printf("The division = %d \n",a/b);
	printf("The quotient = %d \n", a%b);

	return EXIT_SUCCESS;
}

