#include <stdio.h>

int main () {
	// &&(�׸���), ||(�Ǵ�), !(�ƴϴ�)
	int a;
	printf("pick a number : ");
	scanf("%d", &a);
	printf("%d\n", a%7==5);
	printf("%d\n", a%3==0);
	printf("%d\n", a%5!=0);
	printf("%d\n", a%3==0 && a%2==0);
	printf("%d", a%4==0 || a%7==0);
	return 0;
}
