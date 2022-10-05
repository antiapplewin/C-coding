#include <stdio.h>
int main()
{
	float num;
	float NUM;
	printf("type 2 num : ");
	scanf("%f %f", &num, &NUM);
	printf("%.0f / %.0f = %lf", num, NUM, num/NUM);
	return 0;
}
