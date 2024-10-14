#include <stdio.h>

int main(){
	int num=0;
	char c;
	
	printf("Input a string : ");
	scanf("%c", &c);
	
	while((c=getchar())!='\n')
	{
		if(c>=48&&c<=57)
		{
			num++;
		}
	}
	
	printf("The number of digits is %d", num);
	
	return 0;
}
