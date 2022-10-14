#include <stdio.h>

int main (){
	int x, y, z;
	printf("type 3 numbers : ");
	scanf("%d, %d, %d", &x, &y, &z);
	printf("%d", x>=80 && y>=80 && z>=80);
	return 0;
}
