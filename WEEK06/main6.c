#include <stdio.h>


int main(){
	
	int answer=50;
	int gue;
	int count;
	
	do
	{
		printf("Guess a number:");
		scanf("%d", &gue);
		count++;
		
		if(gue<answer){
			printf("Low!\n");
		}
		else if(gue>answer){
			printf("High!\n");
		}
		
	}while(answer!=gue);
	
	printf("Congratulation! Trials : %d", count);
	
	return 0;
	
}
