#include <stdio.h>

int main(){
	int g;
	int kg;
	int ton;
	int cm;
	int m;
	int width;
	int Height;
	int empties = 34;
	int Choco_Pie;
	int width_m = 6;
	int height_cm = 245;
	int rebar = 100;
	
	scanf("%d", &g);
	printf("kg = %d, ton = %d", g / 1000, g / 1000000);
	
	scanf("%d", &cm);
	printf("m = %d", cm / 100);
	
	printf("사각형의 가로");
	scanf("%d", &width);
	printf("사각형의 세로"); 
	scanf("%d", &Height);
	printf("%d", width * Height);
	printf("width(cm) = %d, height(cm) = %d", width / 1000, Height / 1000);
	
	printf("%d, %d", empties / 7, empties % 7);
	
	height_cm = height_cm * 100;
	printf("%d", height_cm * width_m);
	
	rebar = rebar * 100;
	printf("%f", rebar * 1.35);
	
	return 0;
}


