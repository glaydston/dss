#include <stdio.h>
#include <stdlib.h>
#define LIM 100

int main(){
	char string[LIM];

	printf("Put a String: ");
	fflush(stdin);
	gets(string);	

	printf("Bug String: ");	
	printf(string);

	printf("\n\nString: &s", string);
	return(0);
}
