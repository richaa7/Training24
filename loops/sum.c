//Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	int i,r;
	int sum=0;
	printf("Enter a positive number\n");
        scanf("%d",&num);

	for(i=num;i>0;i=i/10)
	{
	r=i%10;
	sum+=r;
	}

	printf ("The sum is = %d\n",sum);

	return EXIT_SUCCESS;

}


	


