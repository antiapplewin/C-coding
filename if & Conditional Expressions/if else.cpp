#include <stdio.h>

int main() {
	//NULL = 0 = false, 12345....1000000000....= 0을 제외한 숫자 = true
	if(NULL){
		printf("True\t참\n");
		printf("응\t맞아\n");
	}
	else{
		printf("False\t거짓\n");
		printf("아니\t아니야\n");
	}
	printf("%d", false);
	return 0;
}
