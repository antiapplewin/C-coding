#include <stdio.h>

int main (){
	int a, b, c;
	printf("I\'m so tired. : ");
	scanf("%d, %d, %d", &a, &b, &c);
	printf("%d", a%8!=0 && a%4==0);
	printf("%d", a%2==1 && a%5==3);
	printf("%d", a%5==0 || a%7==0);
	printf("%d", a*a + b*b == c*c);
	printf("%d", a%b==0 && a%c!=0);
	printf("%d", a>b+c && a<b*c);
	printf("%d", a<b*c || a>b*b);
	return 0;
}
