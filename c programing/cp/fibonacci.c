//fibonacci series : 0 1 1 2 3 5 8 13.....

#include<stdio.h>
main()
{
	int i=0, j=1,k, no;
	
	printf("\n\n input a number : \n");
	scanf("%d",&no);
	
	printf("\n %d %d ",i,j);
	
	k=i+j;
	while(k<=no)
	{
		printf(" %d",k);
		i=j;
		j=k;
		k=i+j;
		
	}
	
}
