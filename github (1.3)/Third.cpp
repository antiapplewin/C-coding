#include <stdio.h>

int main () {
	int i, n, o, p;
	printf("pick a number : ");
	scanf("%d", &n);
	
	o = 1;
	for (i=1; i<=n; i++) {
		printf("%d ", o);
		
		o *= 2;
	}
	printf("\n");
	
	printf("pick a number : ");
	scanf("%d", &n);
	
	o = 1;
	
	for (i=1; i<=n; i++) {
		printf("%d ", o);
		o += i;
	}
	
	printf("\n");

	printf("pick a number : ");
	scanf("%d", &n);
	
	o = 0;
	p = 1;
	for (i=1; i<=n; i++) {
		if(i%2==0){
			printf("%d ", p);
			p += 2;
		}
		else {
			o += 1;
			printf("%d ", o);
		}
	}
	
	return 0;
}
