#include <stdio.h>
int main()
{
	int Y = 2022;
	int M = 9;
	int D = 28;
	int C = 3*4/2;
	float kg = 34.536;
	printf("today is %d/%d/%d\n", Y, M, D);
	printf("%ld\n", C);
	printf("%.0lfg", kg*1000);
	return 0;
}
