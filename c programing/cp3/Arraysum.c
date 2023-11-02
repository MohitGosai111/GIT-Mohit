#include<stdio.h>
main()
{
	int i,a[5],sum=0;
	for(i=0;i<5;i++)
	{
		printf("\n\n Enter the element a[%d] = ",i);
		scanf("%d",&a[i]);
		
		sum+=a[i];
	}
	printf("\n\n Total sum is %d ",sum);
}

