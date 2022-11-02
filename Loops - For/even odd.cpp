#include <stdio.h>

int main () {
	int i, n;
	
	for (i = 0; i<100; i++) {
		n = (i-1)%2;
		printf("%d\n", i*n);
	}
	printf("done");
	return 0;
}
