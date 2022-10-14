#include <stdio.h>

int main (){
	
	int playerAnswer;
	
	printf("dude I got a question man.\n");
	printf("Q. Young He wants to make a flower set.\n");
	printf("And to make a flower set, she need 5 roses, and 3 lilies.\n");
	printf("If she has 100 roses and 80 lilies, if she makes the maximum amount of sets,\n");
	printf("amount of lilies are over 14.\n");
	printf("if it\' true type 1, and else type 0 : ");
	scanf("%d", &playerAnswer);
	
	int CUPsAnswer = 80-20*3>=15;
	
	printf("and the computer saies, %d\n", CUPsAnswer);
	if (playerAnswer == CUPsAnswer) {
		printf("I guess your right...");
	}else{
		printf("ya wrong!");
	}
	return 0;
}
