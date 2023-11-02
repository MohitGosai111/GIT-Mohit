#include<stdio.h>
main()
{
	int sum,n,i;
	printf("\n\n Enter the number :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\n\n The sum of a given number is = %d",sum);
}
