#include <stdio.h>

int main(){
	int num1, num2;
	char sign;
	
	printf("Enter the calculation : ");
	scanf("%d %c %d", &num1, &sign, &num2);
	
	
	switch(sign){
		case '+':
			printf("= %d", num1+num2);
			break;
			
		case '-':
			printf("= %d", num1-num2);
			break;
			
		case '*':
			printf("= %d", num1*num2);
			break;
			
		case '/':
			printf("= %d", num1/num2);
			break;
	}
	
	return 0;
}
