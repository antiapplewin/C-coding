#include <stdio.h>

int main () {
	int PN;
	int x, y;
	printf("pick a number (10 ~ 99) : ");
	scanf("%d", &PN);
	x = PN / 10;
	y = PN % 10;
	printf("add : %ld", x+y);
	return 0;
}
