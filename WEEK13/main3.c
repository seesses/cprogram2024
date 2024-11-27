#include <stdio.h>

#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void){
	struct student s[STUDENTNUM];
	
	int i;
	double sum=0;
	double average;
	
	int maxs=0;
	int maxi=0;
	
	for(i=0;i<STUDENTNUM;i++){
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		
		printf("Input the score: ");
		scanf("%d", &s[i].score);
		
		sum+=s[i].score;
		
		if(s[i].score>maxs){
			maxs=s[i].score;
			maxi=s[i].ID;
		}
	}
	
	average=sum/4;
	printf("The average of the score: %f\n", average);
	
	printf("The highest score - ID: %d, score:%d", maxi, maxs);
}
