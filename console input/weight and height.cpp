#include <stdio.h>
int main()
{
	float H;
	float W;
	
	printf("How tall are U and how much do U weight(add comma(M, KG)) : ");
	scanf("%f, %f", &H, &W);
	printf("you weight %.1fkg and you are %.1lfcm tall", W, H*100);
	return 0;
}
