#include <stdio.h>

/* 출력 a=2 
void square(int a)
{
	a=a*a;
}

int main(){
	int a=2;
	square(a);
	printf("a=%i\n", a);
}
*/

// 출력 a=4 
int square(int a)
{
	return (a*a);
}

int main()
{
	int a=2;
	a=square(a);
	printf("a=%i\n", a);
}
