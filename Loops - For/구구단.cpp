#include <stdio.h>

int main () {
	int n, i;
	printf("������ �Է� : ");
	scanf("%d", &n);
	
	for (i = 9; i>1; i--) {
		printf("%d * %d = %d\n", n, i, n*i);
	}
}
