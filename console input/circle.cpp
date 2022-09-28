#include <stdio.h>
int main()
{
	int M_x;
	int M_y;
	float hl;
	
	printf("pick you circle\'s middle x and y and pick the lenght of a radius : ");
	scanf("%d %d %f", &M_x, &M_y, &hl);
	printf("circle\'s posision is (%d, %d), and the radius is %f", M_x, M_y, hl);
	return 0;
}
