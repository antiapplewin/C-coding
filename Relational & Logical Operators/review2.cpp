#include <stdio.h>

int main () {
	int Pn;
	//x�� ���� �ڸ�, y�� ���� �ڸ�, z�� ���� �ڸ� 
	int x, y, z;
	printf("pick a number (100 ~ 999) : ");
	scanf("%d", &Pn);
	x = Pn/100;
	y = Pn/10-Pn/100*10;
	z = Pn%10;
	printf("add : %ld, times : %ld", x+y+z, x*y*z);
	return 0;
}
