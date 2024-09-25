#include <stdio.h>

int main(void){
	
	float num1;
	float num2;
	
	printf("enter two integers: ");
	scanf("%f %f", &num1, &num2);

	
	printf("%f / %f = %f\n", num1, num2, num1/num2);
	
	return 0;
}
