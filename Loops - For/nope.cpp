#include <stdio.h>

int main () {
	int n, i, sum;
	printf("pick a number : ");
	scanf("%d", &i);
	sum = 0;
	
	for (n = 1; n <= i; n++) {
		sum += n;
	}
	
	printf("%d", sum);
	return 0;
}
