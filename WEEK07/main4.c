#include <stdio.h>


int combination(int n, int r)
{
	return ((factorial(n))/(factorial(n-r)*factorial(r)));
}

int factorial(int count)
{
	int res=1;
	int i;
	for(i=1;i<=count;i++)
	{
		res*=i;
	}
	return res;
}

int get_integer()
{
	int num;
	printf("Enter the value : ");
	scanf("%d", &num);
	return num;	
}

int main(void)
{
	int num1, num2;
	
	num1=get_integer();
	num2=get_integer();
	
	printf("The result of C(%d, %d) is %d", num1,num2,combination(num1, num2));
	
	return 0;
}
