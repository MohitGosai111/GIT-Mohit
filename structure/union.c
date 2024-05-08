// To Demonstrate the union
/* The output of union will be always accoding to last variable type.
   Here, the marks is the last union member so always will show that output by
   overwriting the values of rollno and name. */
#include<stdio.h>
union Student
{
	int rollno;
	char name[30];
	float marks; // always show this output
}stud;
main()
{
	printf("\n\n\t Enter the RollNo. : ");
	scanf("%d",&stud.rollno);
	printf("\n\n\t enter the name :" );
	scanf("%s",&stud.name);
	printf("\n\n\t enter the marks : ");
	scanf("%f",&stud.marks);
	
	printf("\n\n\t rollno : %d",stud.rollno);
	printf("\n\n\t name : %s",stud.name);
	printf("\n\n\t marks : %f",stud.marks);
	
}
