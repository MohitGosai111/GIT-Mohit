#include<stdio.h>
main()
{
	int i,a[5],num,flag=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n Enter the value of array :");
		scanf("%d",&a[i]);
	}
	printf("\n\n ..............................");
	
	for(i=0;i<5;i++)
	{
		printf("\n\n a[%d] : %d",i,a[i]);
	}
	
	printf("\n\n ..............................");
	printf("\n\n Enter element to search :");
	scanf("%d",&num);
		for(i=0;i<5;i++)
		{
			if(num==a[i])
			{
				flag=1;
			}
			
		}
		if(flag)
		{
			printf("\n\n Element is found in array ");
		}
		else
		{
			printf("\n\n Element is not found in array");
		}
}

