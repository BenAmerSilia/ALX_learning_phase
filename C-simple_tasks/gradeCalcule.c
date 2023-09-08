#include <stdio.h>

int main (void){
	int score ;
	printf("Enter your score: \n");
	scanf("%d", &score);
	if ((score > 0)&&(score <= 100)){
		if (score >= 90){
			printf("Your grade is A.\n");
		}else if ((score >= 80)&&(score < 90)){
			printf("Your grade is B.\n");
		}else if ((score >= 70)&&(score <80)){
			printf("Your grade is C.\n");
		}else if ((score >= 60)&&(score < 70)){
			printf("Your grade is D.\n");
		}else {
			printf("You have failed , F\n");
		}
	} else {
		printf("Please enter a score between 0 and 100.\n");
	}

	return 0;
}
