#include <stdio.h>
#include <string.h>
#define LIM 10
#define LIM_MIN 5

int main()
{
	char word[LIM];
	char word_min[LIM_MIN];
	
	printf("Put a word: ");
	fflush(stdin);
	gets(word);

	strcpy(word_min, word);
	printf("\n\nYou put: %s", word);
	printf("\n\nAnd you have now: %s", word_min);

	printf("\n\nThe first word: %c", word[0]);
	return(0);
}
