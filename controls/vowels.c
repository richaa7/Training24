//Write a C program that reads a character from the user and checks whether it is a vowel (a, e, i, o, u) or a consonant using a switch statement.


#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Enter the character");
	
	char a;
	scanf ("%c",&a);
        
	switch(a)
	{
	       case ('a'):
			printf("It is an vowel\n");
			break;

			
               case ('e'):
                        printf("It is an vowel\n");
                        break;
 

	       case ('i'):
                        printf("It is an vowel\n");
               	        break;
               


	       case ('o'):
                        printf("It is an vowel\n");
                        break;
	

	       case ('u'):
                        printf("It is an vowel\n");
                        break;


	      default:
			printf("It is a consonant\n");
	
	}

		return EXIT_SUCCESS;
}

