//Write a program to read and print array elements( using index and using address)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the size\n");
	scanf("%d", &n);

	int a[n];
	printf("Enter the elements\n");


	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("The array is:\n");
	
	 for(int i=0;i<n;i++)
        {
               printf("%d\n",a[i]);
        }

	 return EXIT_SUCCESS;
}

 


