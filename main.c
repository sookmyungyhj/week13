#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int id;
	char name[10];
	double grade;
};

void main(void) {
	struct student A = {123456,"Juyeop",4.3};
	
	A.id = 654321;
	A.grade = 4.100000;
	
	printf("ID : %d \n",A.id);
	printf("NAME : %s \n",A.name);
	printf("GRADE : %f \n",A.grade);
	
	return 0;
}
