/* 5 :
5 * 1 = 5
5 * 2 = 10 */

#include<stdio.h>
main()
{
	int no, i;
	
	printf("\n\n input a number to print the table : \n");
	scanf("%d",&no);
	
	i=1;
	while(i<=10)
	{
		printf("\n %d * %d = %d" ,no,i,no,i);
		i=i+1;
		
	}
}

