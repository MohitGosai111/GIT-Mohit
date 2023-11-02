#include<stdio.h>
main()
{
	int i;
	
	for(i=1;i<=5;i++)
	{
		if(i==3)
		continue; //skip the number 3 then print the output. op:1 2 4 5
		//break; //terminate the block from number3
		printf("  %d",i);
	}
}
