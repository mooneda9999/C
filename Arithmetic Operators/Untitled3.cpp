#include <stdio.h>

int main(){
	int i;
	int j;
	
	scanf("%d", &i);
	scanf("%d", &j);
	
	printf("%d + %d = %d\n", i, j, i + j);
	printf("%d - %d = %d\n", i, j, i - j);
	printf("%d * %d = %d\n", i, j, i * j);
	printf("%d / %d = %d\n", i, j, i / j);
	printf("%d %% %d = %d", i, j, i % j);
	
	return 0;
}
