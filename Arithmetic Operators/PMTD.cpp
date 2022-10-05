#include <stdio.h>
int main()
{
	int num;
	int NUM;
	printf("write down two number(a > b) : ");
	scanf("%d %d", &num, &NUM);
	printf("%d + %d = %ld\n", num, NUM, num+NUM);
	printf("%d - %d = %ld\n", num, NUM, num-NUM);
	printf("%d * %d = %ld\n", num, NUM, num*NUM);
	printf("%d / %d = %ld\n", num, NUM, num/NUM);
	printf("%d %% %d = %ld", num, NUM, num%NUM);
	return 0;
}
