#include <stdio.h>

struct student{
	int ID;
	char name[10];
	double grade;	
};

void main(void){
	struct student s1={2414966, "seunga", 4.2};
	
	s1.ID=24;
	strcpy(s1.name, "Eunju");
	s1.grade=4.2;
	
	printf("ID: %d\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("grade: %f\n", s1.grade);
	
}
