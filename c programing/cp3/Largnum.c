// to check whether which num is largest

#include<stdio.h>
main()
{ 
int a,b,c;
 printf("\n\n Enter the number a:");
 scanf("%d",&a);
 
 printf("\n\n Enter the number b:");
 scanf("%d",&b);
 
 printf("\n\n Enter the number c:");
 scanf("%d",&c);
 
 if(a>b)
 {
  if(a>c)
  { printf("\n\n a is largest");
  }

else if (b>c)
{
		printf("\n\n b is largest");
}
}
else
{

printf("\n\n c is largest");

}
}
