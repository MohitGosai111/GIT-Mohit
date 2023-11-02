#include<stdio.h>
main()
{
	//int i, a[5]={23,24,25,43,11};
	int i,a[10],sum=0;
	for(i=0;i<10;i++)
	{
		printf("\n\n Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<10;i++)
	{
		printf("\n\n The value of a[%d] : %d ",i,a[i]);
	
	}
		printf("\n\n Sum of array %d",sum);
}

