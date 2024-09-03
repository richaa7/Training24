//Implement a small C program that performs the following tasks:
//	Read an integer representing the student score.
//	Read a character representing the Student Grade (A, B, C, D, or F).
//	Print Your score is 90 and Grade is A.


#include<stdio.h>
#include<stdlib.h>

int main()
{

	float marks;
	char grade;

	printf("Enter the marks and grade\n" );
	 scanf("%f %c",&marks, &grade);

	 printf("The marks is %.2f and the grade is %c\n",marks, grade);

	 return EXIT_SUCCESS;
}


