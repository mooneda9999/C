#include <stdio.h>

void getChar(char *cp);
void printChar(char *cp);

int main()
{
	char ch1, ch2;
	char *cp1, *cp2;
	
	cp1 = &ch1;
	cp2 = &ch2;
	printf("����1 �Է� : ");
	ch1 = getchar();
	getchar();
	printf("����2 �Է� : ");
	scanf("%c", *ch2);
	getchar();
	printf("%c", *cp1);
	putchar(*cp2);
	
	getChar(&ch1);
	printfChar(cp1);
	
	return 0;
}

void getChar(char *cp)
{
	printf("����3 �Է� : ");
	*cp = getchar();
	getchar();	
}

void printChar(char *cp)
{
	printf("%c", *cp);	
}
