#include <stdio.h>
int main()
{
	float eye_l;
	float eye_r;
	
	printf("type both eyesight.(left-right) : ");
	scanf("%f %f", &eye_l, &eye_r);
	printf("left eyesight = %.1f, right eyesight = %.1f", eye_l, eye_r);
	return 0;
}
