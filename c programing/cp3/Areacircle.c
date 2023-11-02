//to find the area of circle ,rectangle and triangle

#include<stdio.h>
main()
{
	int r,l,breadth, base ,h;
	float pi=3.14,area ;
	 printf("\n\n Input the value of radius :");
	 scanf("%d",&r);
	 
	 printf("\n\n Input the value of length :");
	 scanf("%d",&l);
	 
	 printf("\n\n Input the value of breadth :");
	 scanf("%d",&breadth);
	 
	 printf("\n\n Input the value of base :");
	 scanf("%d",&base);
	 
	 printf("\n\n Input the value of height :");
	 scanf("%d",&h);
	 
	 area=pi*(r*r);
	 printf("\n\n area of circle = %f",area);
	 
	 area=l*breadth;
	 printf("\n\n area of rectangle = %f",area);
	 
	 area=(base*h)/2;
	 printf("\n\n area of triangle = %f",area);
	 
	 
	 
	 
}

