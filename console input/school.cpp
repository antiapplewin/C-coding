#include <stdio.h>
int main()
{
	int G;
	int C;
	int N;
	
	printf("type your grade, class, and num.(ex. 1(grade) 5(class) 12(num)(don\'t type ()to)) : ");
	scanf("%d %d %d", &G, &C, &N);
	printf("your %dgrade in %d class, and your %d in the front", G, C, N);
	return 0;
}
