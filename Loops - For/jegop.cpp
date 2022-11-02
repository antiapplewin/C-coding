#include <stdio.h>

int main () {
	int i, n, o, sum;
	sum = 0;
	for (i = 1; i<=23; i++) {
		if (i%2==0) {
			sum -= i*i;
		}
		else {
			sum += i*i;
		}
	}
	printf("%d", sum);
}
