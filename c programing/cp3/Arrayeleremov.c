#include<stdio.h>
main()
{
	int i,a[20],ele,num,flag=0,index;
	
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
    printf("\n\n Enter the number you want to delete :");
	scanf("%d",&num);
	
	for(i=0;i<ele;i++)
	{
		if(num==a[i])
	{
		flag=1;
		index=i;
	}
	}
	
	if(flag=0)
	{
		printf("\n\n Entered Number is not found in array element!...");
	}
	else
	printf("\n\n index of an enter elemnt is %d",index);
	{
		for(i=index;i<ele;i++)
		{
			a[i]=a[i+1];
		}
	}
	
	for(i=0;i<ele-1;i++)
	{
		printf("\n\n a[%d] = %d ",i,a[i]);
	}
	
}

