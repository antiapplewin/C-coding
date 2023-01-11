#include <stdio.h>

struct Cood {
	int x;
	int y;
};

int main() {
	struct Cood p1;
	struct Cood p2 = {5, 9};
	struct Cood P3;
	struct Cood p4;
	
	p1.x = 2;
	p1.y = 3;
	
	printf("p1\'s position : (%d, %d)\n", p1.x, p1.y);
	printf("p2\'s position : (%d, %d)", p2.x, p2.y);
	
	return 0;
}
