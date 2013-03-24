#include <stdlib.h>
#include <stdio.h>
#define LIM 10

int main(){
	int i;
	int array[LIM];

	for(i = 0; ;i++){
		array[i] = 5;
		printf("Array: %d", array[i]);
	}

	return(0);
}
