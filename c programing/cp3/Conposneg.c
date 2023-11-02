#include<stdio.h>
main()
{
	int a;
	printf("\n\n Enter the number a :");
	scanf("%d",&a);
    
    if(a>0)
    {
	a=a*(-1);
    printf("\n\n Negative value of Given number is %d",a);
}
    else 
   {
	 a=a*(-1);
    printf("\n\n Positive value of Given number is %d",a);
}
}

