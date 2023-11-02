#include<stdio.h>
main()
{
	int num;
	printf("\n\n enter the number : ");
	scanf("%d",&num);
	if(num%2==0)
	    goto even; //even is called "label"
	    
	else
	goto odd; //odd is called "label"
	
	even :
		   printf("\n the number is even...");
		   exit(0); //return0
		   
	odd :
		  printf("\n the number is odd...");
		  
		   
		
}
