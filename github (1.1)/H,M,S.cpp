#include <stdio.h>

int main () {
	int S, h, m;
	printf("pick second : ");
	scanf("%d", &S);
	h = S/3600;
	S -= h*3600;
	m = S/60;
	S -= m*60;
	printf("%d:%d:%d", h, m, S);
	return 0;
}
