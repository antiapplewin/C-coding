#include <stdio.h>
int main()
{
	int random;
	printf("type an any number : ");
	scanf("%d", &random);
	printf("%ld", random%7);
	return 0;
}
