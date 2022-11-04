#include <stdio.h>

int main () {
	int i, n = 0, o, p;
	float f;
	
	printf("pick a num : ");
	scanf("%d", &p);
	
	for (i=3; i<=p; i+=3) {
		printf("%d, ", i);
	}
	printf("DONE\n");
	
	for (i=6; i<=p; i+=6) {
		n += i;
		printf("%d, ", i);
	}
	printf("%d, ", n);
	printf("DONE\n");
	
	printf("pick a number that\'s contain . : ");
	scanf("%f", &f);
	
	o = 1;
	
	for (i=f; i>1; i/=2) {
		o+=1;
	}
	printf("%d", o);
	
	return 0;
}
