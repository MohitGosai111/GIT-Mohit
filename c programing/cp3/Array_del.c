#include<stdio.h>
main()
{
	int i,a[20],ele,index;
	
	printf("\n\n Enter the element of array = ");
	scanf("%d",&ele);
	for(i=0;i<ele;i++)
	{
		printf("\n\n\ Enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n __________________________________");

	for(i=0;i<ele;i++)
	{
		printf("\n\n a[%d] = %d ",i,a[i]);
	}
	printf("\n\n __________________________________");
	printf("\n\n Enter the index number you want to remove = ");
	scanf("%d",&index);
	for(i=index;i<ele;i++)
	{
		a[i]=a[i+1];
	}
	
	for(i=0;i<ele-1;i++)
	{
		printf("\n\n a[%d] = %d ",i,a[i]);
	}
	
}

