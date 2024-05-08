//to demostructure the nested structure ( structure within structure ). 
#include<stdio.h>
#include<string.h>

struct stud_info  //outer structure
{
	int rollno;
	char name[30];
	
	struct stud_result  //inner structure
	{
		float marks;
	}sr;
}si;

main()
{
	printf("\n\n\t....................................................");
	printf("\n\n\t input rollno : ");
	scanf("%d",&si.rollno);
	
	printf("\n\n\t input name : ");
	scanf("%s",&si.name);
	 
	printf("\n\n\t input marks : ");
	scanf("%f",&si.sr.marks);
	
	printf("\n\n\t..........................student.........................................");
	printf("\n\n\t roll no. : %d",si.rollno);
	printf("\n\n\t name : %s",si.name);
	printf("\n\n\t marks : %f",si.sr.marks);	
}
	
