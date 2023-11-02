#include<stdio.h>
main()
{
	int i,j,a[5][3];
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n Enter the element [%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}

