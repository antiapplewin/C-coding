#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int min = 1000, index;
	int arr[10];
	
	for (int i = 0; i<=9; i++) {
		arr[i] = rand()%11;
		if (min>=arr[i]) {
			min = arr[i];
			index = i;
		}
	}
	printf("min : %d, index : %d", min, index);
}
