//program to find given number is Odd or Even

#include<stdio.h>
#include<stdlib.h>
 int main()
{
	int a;
	 printf("Enter the number\n");
	 scanf("%d",&a);

	 if(a%2==0)
	 {
		 printf("The number is even!\n");
	 }
	 else {
		 printf("The number is odd!\n");
	 }

	 return EXIT_SUCCESS;
}

