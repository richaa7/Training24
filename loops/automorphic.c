/*C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.*/

#include<stdio.h>
#include<stdlib.h>

#include<math.h>

int main()
{
	int num;
	int sq=0,dn=0,k=0,i=0,j=0;
	int fn=0, en=0,p=0,r=0,rm=0;


	printf("Enter the number\n");
	scanf("%d",&num);

	sq= num*num;
	 printf("square is %d\n",sq);


	for(i=num;i>0;i=i/10)
	{
		k++;
		

	}
	 printf("Digits are %d\n",k);


	for (j=0;j<k;j++)
	{
		r=sq%10;
		en=en*10+r;
		sq=sq/10;


	}
	 printf("The extracted number %d\n",en);


	for(p=en;p>0;p=p/10)
	{
		rm=p%10
			;
		fn=fn*10+rm;
	}

	 printf("The final number %d\n",fn);
	if(fn==num)
	{
		printf("The number is automorphic\n");
	}
	else{ printf("The number is not automorphic\n");
	}


	return EXIT_SUCCESS;
}
