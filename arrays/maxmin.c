//  Write a program to find the maximum and minimum elements in an array of integers.


#include<stdio.h>
#include<stdlib.h>
 int main()
{
	int n;
	printf("Enter the size\n");
	scanf("%d", &n);
        int a[n];
	int i,j;
	int max=0,min=0;

	printf("Enter the elements\n");

	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 max=a[0];
	 min=a[0];
	




	for ( i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}

		if(a[i]<min)
		{
			min=a[i];
		}
	}

	printf("The max number = %d\n",max);
	printf("The min number = %d\n", min);

	return EXIT_SUCCESS;
}



	
