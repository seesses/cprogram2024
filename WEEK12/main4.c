#include <stdio.h>

int main(void){
	int i;
	int grade[5];
	int *ptr;
	int sum;
	ptr=&grade;
	
	for(i=0;i<5;i++)
	{
		printf("Input value-grade[%i]=", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		ptr[i]=*(ptr+i);
		sum+=ptr[i];
		printf("grade[%d] = %d\n", i, ptr[i]);
	}
	
	printf("average=%d", sum/5);
	
	return 0;
}
