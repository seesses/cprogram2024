#include <stdio.h>

int main(int argc, char*argv[])
{
	int x,y;
	
	printf("Input two integers: ");
	scanf("%i,%i", &x, &y);
	
	printf("& result is %d\n", x&y);
	printf("| result is %d\n", x|y);
	printf("^ result is %d\n", x^y);
	printf("<<1 result is %d\n", x<<1);
	printf(">>1 result is %d\n", x>>1);
	
	return 0;
}
