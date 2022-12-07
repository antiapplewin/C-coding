#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int sum = 0;
	int arr[10];
	
	srand(time(NULL));
	
	for (int i = 0; i<10; i++) {
		arr[i] = rand()%11;
		
		sum += arr[i];
	}
	printf("%d", sum);
}
