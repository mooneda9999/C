#include <stdio.h>

int main()
{
	int num[8] = {5, 2, 6, 7, 8, 9, 4, 3, 1};
	int page[10] = {123, 57, 67, 86};
	int i, j;
	
	for(i = 0; i < 10; i++){
		printf("%d\n", num[i]);	
	}
	
	for(j = 0; j < 10; j++){
		printf("%d\n", page[j]);	
	}
	
	return 0;
}
