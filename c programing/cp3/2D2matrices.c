#include<stdio.h>
main()
{	
	int i,j;
	float a[3][3],a1[3][3],sum[3][3],sub[3][3],mul[3][3],div[3][3];	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n Enter the element [%d][%d] = ",i,j);
			scanf(" %f",&a[i][j]);
		}
	}
	
	printf("***********************************************");
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n Enter the element [%d][%d] = ",i,j);
			scanf(" %f",&a1[i][j]);
		}
	}
	printf("***********************************************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f",a[i][j]);
		}
		printf("\n");
	}
	printf("************************************************\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f",a1[i][j]);
		}
		printf("\n");
	}
	
	printf("************************************************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+a1[i][j];
			sub[i][j]=a[i][j]-a1[i][j];
			mul[i][j]=a[i][j]*a1[i][j];
			div[i][j]=a[i][j]/a1[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=a[i][j]*a1[i][j];
			div[i][j]=a[i][j]/a1[i][j];
		}
	}
	printf("\n Sum of element of both arrays \n");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f",sum[i][j]);
		}
		printf("\n");
	}
		printf("\n Sub of element of both arrays \n");
		printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f",sub[i][j]);
		}
		printf("\n");
	}
		printf("\n Mul of element of both arrays \n");
		printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f",mul[i][j]);
		}
		printf("\n");
	}
		printf("\n Div of element of both arrays \n");
		printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f",div[i][j]);
		}
		printf("\n");
	}
		
}

