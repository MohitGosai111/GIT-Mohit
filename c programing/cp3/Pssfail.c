#include<stdio.h>
main()
{
	int Roll_n0,marks;
	
	printf("\n\n Roll no of the student is :");
	scanf("%d",&Roll_n0);
	
	printf("\n\n Marks of student is :");
	scanf("%d",&marks);
	
	if(marks>=70)
	{
		printf("\n\n The student is passed with disctinction");
	}
	else if(marks>=60)
	{
	 printf("\n\n The student get first class");
    }
	 else if(marks>=50)
	{
	printf("\n\n The student get second class");
    }
    else if(marks>=40)
    {
    	printf("\n\n The student is pass");
	}
else 
printf("\n\n The student is fail");
}

