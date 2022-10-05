#include <stdio.h>

int main(){
	float i;
	float j;
	
	scanf("%f", &i);
	scanf("%f", &j);
	
	printf("%f + %f = %f\n", i, j, i + j);
	printf("%f - %f = %f\n", i, j, i - j);
	printf("%f * %f = %f\n", i, j, i * j);
	printf("%f / %f = %f\n", i, j, i / j);

	return 0;
}
