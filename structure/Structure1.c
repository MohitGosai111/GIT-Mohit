#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[30];
	float marks;
}stud[3];

main()
{
	//struct student stud;
	int i;
	for(i=0;i<3;i++){ //to access all the structure member by array of structure variable
       
   	    printf("\n\n\t................................................");
   	    printf("\n\n\t input rollno : ");
   	    scanf("%d", &stud[i].rollno);
   	    
   	    
   	    printf("\n\n\t input nmae :  ");
   	    scanf("%s",&stud[i].name);
   	    
   	    printf("\n\n\t input marks : ");
   	    scanf("%f",&stud[i].marks);
}
		for(i=0;i<3;i++)
		{
			 printf("\n\n\t...................student [%d].............................",i);
   	    printf("\n\n\t roll no  : %d",stud[i].rollno);
   	    printf("\n\n\t name  : %s",stud[i].name);
   	    printf("\n\n\t marks  : %f",stud[i].marks);
   	    
		}
}
