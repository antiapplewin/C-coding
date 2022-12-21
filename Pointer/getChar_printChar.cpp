#include <stdio.h>

void getChar(char *cp);
void printChar(char *cp);

int main () {
	char ch1, ch2;
	char *cp1, *cp2;
	
	cp1 = &ch1;
	cp2 = &ch2;
	printf("Enter any word thing... : ");
	ch1 = getchar();
	getchar();
	printf("Another... : ");
	scanf("%c", &ch2);
	getchar();
	printf("%c", *cp1);
	putchar(*cp2);
	
	getChar(&ch1);
	printChar(cp1);
	
	return 0;
}

void getChar(char *cp) {
	printf("Another...DUDE : ");
	*cp = getchar();
	getchar();
}

void printChar(char *cp) {
	printf("%c", *cp);
}
