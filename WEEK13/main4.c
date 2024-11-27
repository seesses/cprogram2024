/* 구조체 변수 자체를 매개 변수로 넘김 
#include <stdio.h>

struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2){
	return ((p2.x-p1.x)*(p2.y-p1.y));
}

int main(int argc, char*argv[]){
	struct point p1, p2;
	int area;
	
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	area=getArea(p1, p2);
	if(area>0){
		printf("Area: %d", area);	
	}
	else{
		printf("Area: %d", area*-1);
	}
}
*/ 

#include <stdio.h>
struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2){
	return (pPtr2->x - pPtr1->x)*(pPtr2->y - pPtr1->y);
}

int main(int argc, char*argv[]){
	
	int area;
	
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	
	pPtr1 = &p1;
    pPtr2 = &p2;
	
	printf("Input the coordinate p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Input the coordinate p2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

	
	area=getArea(pPtr1, pPtr2);
	if(area>0){
		printf("Area: %d", area);	
	}
	else{
		printf("Area: %d", area*-1);
	}
	
	return 0;
}
