#include <stdio.h>

int main () {
	int n, i;
	printf("구구단 입력 : ");
	scanf("%d", &n);
	
	for (i = 9; i>1; i--) {
		printf("%d * %d = %d\n", n, i, n*i);
	}
}
