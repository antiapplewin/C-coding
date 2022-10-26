#include <stdio.h>

int main() {
	
	int num, a, b, da, db, I, cookie, t, w, x, y, z, m;
	I = 0;
	
	printf("U pick a num : ");
	scanf("%d", &num);
	
	if (num > 0)
	{
		printf("plus\n");
	}
	else if (num<0)
	{
		printf("minus\n");
	}
	
	if (num%2==0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	
	if (num%3==0)
	{
		printf("times by 3\n");
	}
	else
	{
		printf("not times by 3\n");
	}
	
	printf("pick 2 num : ");
	scanf("%d, %d", &a, &b);
	if (a>b)
	{
		da = a;
		db = b;
	}
	else
	{
		da = b;
		db = a;
	}
	
	if (da%db==0)
	{
		printf("big num can devided with small num\n");
	}
	else
	{
		printf("big num can\'t devided with small num\n");
	}
	
	printf("pick a number : ");
	scanf("%d", &cookie);
	if (cookie < 0)
	{
		cookie = -cookie;
	}
	printf("%d", cookie);
	
	printf("nogada 5 number : ");
	scanf("%d, %d, %d, %d, %d", &t, &w, &x, &y, &z);
	
	m = t;
	if (m<w)
	{
		m = w;
	}
	if (m<x)
	{
		m = x;
	}
	if (m<y)
	{
		m = y;
	}
	if (m<z)
	{
		m = z;
	}
	printf("%d", m);
	
	return 0;
}
