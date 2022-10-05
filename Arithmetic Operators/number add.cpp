#include <stdio.h>
int main()
{
	int f_1;
	int s_1;
	printf("pick 2 2nunber long number : ");
	scanf("%d %d", &f_1, &s_1);
	printf("%ld\n", f_1/10+(f_1-(f_1/10)*10));
	printf("%ld", s_1/10+(s_1-(s_1/10)*10));
	return 0;
}
