#include<stdio.h>
main()
{
	int i,j,a[3][4]={{10,11,12,13},{14,15,16,17},{18,19,20,21}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}

