#include<stdio.h>
main()
{
	int i, j;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf(" * ");
			j++;  //j=j+1;
		}
		printf("\n");
		i=i+1;
	}
}



