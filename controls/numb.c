//Write a C program that takes an integer input from the user and prints whether it is positive, negative, or zero

#include <stdio.h>
#include<stdlib.h>

int main()
{

	int n;

	printf("Enter the number");

	scanf("%d", &n);
	if (n==0)
	{
		printf("The number is zero");
	}
	 if(n>0)
	 {
		 printf("The number is positive");
	 }
	 else if (n<0)
	 {
		 printf("The number is negative");
	 }
	  printf("\n");

	  return EXIT_SUCCESS;
}


