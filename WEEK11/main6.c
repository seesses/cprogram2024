/* �� ���ھ� �о ��� 
#include <stdio.h>

void main(void){
	FILE *fp;
	char c;
	
	fp=fopen("sample.txt", "r");
	
	while((c=fgetc(fp))!=EOF)
		putchar(c);
		
	fclose(fp);
}
*/

//�� �ܾ �о ��� 
#include <stdio.h>

void main(void){
	FILE *fp;
	char c[10];
	
	fp=fopen("sample.txt", "r");
	
	while(fgets(c, 10, fp)!=NULL)
		printf("%s", c);
		
	fclose(fp);
}

