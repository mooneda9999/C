#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int arr[10];
	int sum = 0;
	int min = 1000;
	
	srand(time(NULL));

	
//	printf("%d", rand()%101);
	
	for(int i = 0; i < 10; i++){
		arr[i] = rand()%101;
		
		if(min > arr[i]){
			min = arr[i];
		}
		
		printf("%d \n", arr[i]);
		sum += arr[i];
	}
	printf("min : %d \n", min);
	
	printf("sum : %d", sum);
															
	return 0;
}
