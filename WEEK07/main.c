#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int sumTwo(int a, int b){
	return a+b;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}

int main(void){
	int num1, num2;
	int result1, result2, result3;
	
	printf("Enter the integers : ");
	scanf("%d, %d", &num1, &num2);
	
	result1=sumTwo(num1, num2);
	result2=square(num1);
	result3=get_max(num1, num2);
	
	printf("Result - Sum: %d, Square:%d, Max:%d", result1, result2, result3);
	
	return 0;
}
