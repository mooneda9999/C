#include <stdio.h>

int main(){
	int i;
	int j;
	int k;
	
	scanf("%d", &i);
	
	// if(i / 7 == 5){
	// 	
	// }
	// else if(i % 3 == 0){
	// 	
	// }
	// else if(i % 5 != 0){
	// 	
	// }
	// else if(i % 3 == 0 && i % 2 == 0){
	// 	
	// }
	// else if(i % 4 == 0 || i % 7 == 0){
	// 	
	// }

	printf("%d", i / 7 == 5);
	printf("%d", i % 3 == 0);
	printf("%d", i % 5 != 0);
	printf("%d", i % 3 == 0 && i % 2 == 0);
	printf("%d", i % 4 == 0 || i % 7 == 0);
	return 0;
}
