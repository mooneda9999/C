#include <stdio.h>

int main()
{
	int n = 0;
	
	printf("%d", n);
	printf("%d", n += 3);
	printf("%d", n *= 0);
	printf("%d", n += 5);
	printf("%d", n++);
	printf("%d", ++n);
	printf("%d", n % 5);
	printf("%d", --n);
	printf("%d", n--);
	printf("%d", n);
	return 0;
}

