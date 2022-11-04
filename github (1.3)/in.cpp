#include <stdio.h>

int main () {
	int i, n;
	n = 5;
	
	for (i=0; i<10; i++){
		printf("%d ", n);
		
		n-=1;
	}
	
	return 0;
}
