#include <stdio.h>

int main () {
	int i, n, o, p;
	printf("pick a num that\' over 0 : ");
	scanf("%d", &i);
	
	p = i;
	
	for (;i%3!=0;i--) {
		p -= 1;
	}
	
	for (n = p; n>0; n-=3) {
		printf("%d\n", n);
	}
	
	return 0;
}
