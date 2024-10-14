#include <stdio.h>

int main(){
	int sum=0;
	int num, i;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++){
		sum+=i;
	}
	
	printf("The result is %d", sum);
	return 0;
}
