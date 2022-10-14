#include <stdio.h>

int main (){
	int x, y, z;
	printf("type 3 numbers : ");
	scanf("%d, %d, %d", &x, &y, &z);
	printf("%d", x <= 7.8 || y>125.7 || z>=45);
	return 0;
}
