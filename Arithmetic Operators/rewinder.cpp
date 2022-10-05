#include <stdio.h>
int main()
{
	int heat;
	float speed;
	printf("how hot is the air? how fast is the sound? : ");
	scanf("%d, %f", &heat, &speed);
	printf("if air is %d¨¬C hot, than sound\'s speed is %.1f/s", heat, speed);
	return 0;
}
