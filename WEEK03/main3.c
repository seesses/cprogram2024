#include <stdio.h>

int main(void){
	
	int c;
	
	printf("enter a character : ");
	scanf("%c", &c);
	
	printf("the next character of %c(%i) is %c(%i)",c,c,c+1,c+1);
	
	return 0;
}
