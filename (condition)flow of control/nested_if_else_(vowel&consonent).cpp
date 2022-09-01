/* Nested if..else if ...else */
/* Is it a vowel? */

#include<stdio.h>

int main(void)
{
	char alphabet;
	printf("Please give in an alphabet:\n");
	scanf("%c", &alphabet);

	if (alphabet != 'a')
        if (alphabet != 'e')
			if (alphabet != 'i')
				if (alphabet != 'o')
					if(alphabet != 'u')
						printf("The given alphabet is not a vowel, but a consonant\n");
                	else
                		printf("You entered \'u\'. It\'s a vowel.\n");
                else
                    printf("You entered \'o\'. It\'s a vowel.\n");
            else
            	printf("You entered \'i\'. It\'s a vowel.\n");
        else
            printf("You entered \'e\'. It\'s a vowel.\n");
    else
        printf("You entered \'a\'. It\'s a vowel.\n");
                   
	return 0;
}


