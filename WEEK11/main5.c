#include <stdio.h>

void main(void) {
    char c[100]; 
    int i = 0;

    FILE *fp;
    fp = fopen("C:\sample.txt", "w"); 


    for (i = 0; i < 3; i++) {
        printf("Input a word: ");
        scanf("%s", &c); 
        fprintf(fp, "%s\n", c); 
    }
    

    fclose(fp); 
}

