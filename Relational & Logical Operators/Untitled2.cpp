#include <stdio.h>
int main(){
	int xyz, i, j, k;
	scanf("%d", &xyz);
	j = xyz % 10;
	k = xyz / 100;
	a = (xyz % 100) / 10;
	printf("더하기 : %d\n곱하기 : %d", k + a + j, k * a * j);
	return 0;
}
