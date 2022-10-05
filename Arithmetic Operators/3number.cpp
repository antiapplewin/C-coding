#include <stdio.h>
int main()
{
	int three;
	int x, y, z;
	printf("pick a 3number long number : ");
	scanf("%d", &three);
	x = three/100;
	y = three/10-three/100*10;
	z = three%10;
	printf("plus = %ld, times = %ld", x+y+z, x*y*z);
	return 0;
}
