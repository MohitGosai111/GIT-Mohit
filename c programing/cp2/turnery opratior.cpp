#include<stdio.h>

main()
{
	int a,b;
	
	printf("Input Number1:");
	scanf("%d",&a);
	printf("\nInput Number2 :");
	scanf("%d",&b);
	
	a>b?printf("Number 1 (%d) is bigger.",a):printf("Number 2 (%d) is bigger.",b);
	
}
