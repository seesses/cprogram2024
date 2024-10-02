#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int sec;
	
	printf("Input the second : ");
	scanf("%d", &sec);
	
	printf("This time is %d : %d", sec/60, sec%60);
	
	return 0;
}
