//program to find largest of three numbers

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	int max;

	printf("Enter the numbers\n");
	scanf("%d %d %d", &a,&b,&c);

	if(a>b)
	{
		if(a>c)
			printf("The largest number is = %d\n", a);
	}
	else if(b>c)
		printf("The largest number is = %d\n", b);
	else
		printf("The largest number is =%d\n", c);

	return EXIT_SUCCESS;
}

