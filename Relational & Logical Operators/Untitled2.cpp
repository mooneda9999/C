#include <stdio.h>
int main(){
	int xyz, i, j, k;
	scanf("%d", &xyz);
	j = xyz % 10;
	k = xyz / 100;
	a = (xyz % 100) / 10;
	printf("���ϱ� : %d\n���ϱ� : %d", k + a + j, k * a * j);
	return 0;
}
