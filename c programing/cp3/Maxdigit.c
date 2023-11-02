#include<stdio.h>
main()
{
	int number,rem=0,large=0;
	printf("\n\n Enter a digit :");
	scanf("%d",&number);
	
	while (number>0)
	{
		rem=number%10;
		if(rem>large)
		{
			large=rem;
		}
		number/=10;
	}
	printf("\n\n Large digit from a number is %d",large);
    
} 
