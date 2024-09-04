//Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
//90-100: A
//80-89: B
//70-79: C
//60-69: D
//Below 60: F
//Print the grade.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sc;

	printf("Enter the score\n");
	scanf("%d",&sc);

	if(sc>=90 && sc<=100)
	{
		printf("The Grade is A!");
	}
	else if(sc>=80 && sc<90)
	{
		printf("The grade is B!");
	}
	else if(sc>=70 && sc<80)
	{
		printf("The grade is C!");
	}
	else if(sc>=60 && sc<70)
	{
		printf("The grade is D!");
	}
	else 
		printf("The grade is F!");

	printf("\n");

	return EXIT_SUCCESS;
}

	
