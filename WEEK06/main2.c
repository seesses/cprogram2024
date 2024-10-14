#include <stdio.h>

int main(){
	
	int num;
	printf("Enter an integer : ");
	scanf("%i", &num);
	
	if(num>0){
		printf("%i", num);
	}
	else{
		printf("%i", num*(-1));
	}
	
	return 0;
}
