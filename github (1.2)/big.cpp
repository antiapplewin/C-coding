#include <stdio.h>

int main () {
	int n, u, m, N, U, M, nu, nm, um, Nu, NN, Nm, Nn;
	float x, a, b, c, y;
	char F, S, L;
	
	printf("number : ");
	scanf("%d", &n);
	if (n%2==0 && n%3==0){
		printf("your num can devided with 2 || 3\n");
	}
	else {
		printf("nope!\n");
	}
	
	printf("number : ");
	scanf("%d", &u);
	if (12%u==0 && 30%u==0){
		printf("num is common measure of 12 and 30\n");
	}
	else {
		printf("nope!\n");
	}
	
	printf("3 number : ");
	scanf("%d, %d, %d", &m, &N, &U);
	if (M<m) {
		M = m;
	}
	if (M<N) {
		M = N;
	}
	if (M<U) {
		M = U;
	}
	if (Nu>m) {
		Nu = m;
	}
	if (Nu>N) {
		Nu = N;
	}
	if (Nu>U) {
		Nu = U;
	}
	printf("%d, %d", M, Nu);
	
	printf("number : ");
	scanf("%f", &x);
	x *= 10;
	Nn = (int)(x);
	printf("%d\n", Nn);
	
	printf("3number : ");
	scanf("%f, %f, %f", &a, &b, &c);
	if (y<a){
		y = a;
	}
	if (y<b){
		y = b;
	}
	if (y<c){
		y = c;
	}
	printf("%f, ", y);
	if (y==a){
		F = 'a';
	}
	if (y==b){
		F = 'b';
	}
	if (y==c){
		F = 'c';
	}
	y = 0;
	if (y<a && F!='a'){
		y = a;
	}
	if (y<b && F!='b'){
		y = b;
	}
	if (y<c && F!='c'){
		y = c;
	}
	printf("%f, ", y);
	return 0;
}
