#include <stdio.h>

int main () {
	int Pn;
	//x는 백의 자리, y는 십의 자리, z는 일의 자리 
	int x, y, z;
	printf("pick a number (100 ~ 999) : ");
	scanf("%d", &Pn);
	x = Pn/100;
	y = Pn/10-Pn/100*10;
	z = Pn%10;
	printf("add : %ld, times : %ld", x+y+z, x*y*z);
	return 0;
}
