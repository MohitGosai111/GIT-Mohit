//5 : 1 to 5 sum : 1 2 3 4 5

#include<stdio.h>
main()
{
	int sum, i, no;
	
	printf("\n\n input a number : \n");
	scanf("%d",&no);
	
	printf("\n numbers are : ");

	i=1;
	while(i<=no)
	{
		printf(" %d + ",i);
		sum=sum+i;
		
		i=i+1;
    }
    
    printf("\n\n sum of all the numbers : %d ,sum");
}
	
	

