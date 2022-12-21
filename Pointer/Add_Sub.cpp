#include <stdio.h>
void AddNum(int, int);
void SubNum(int*, int*);

int main () {
	int n, m;
	int *pa = &n, *pb = &m;
	
	printf("Enter a num : ");
	scanf("%d %d", &n, pb);
	
	AddNum(n, m);
	SubNum(&n, &m);
	
	return 0;
}

void AddNum(int a, int b) {
	printf("%d\n", a+b);
}

void SubNum(int* a, int*b) {
	printf("%d", *a-*b);
}
