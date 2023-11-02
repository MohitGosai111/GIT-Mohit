#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	char str1[20]="welcome";
	int len;
	printf("\n\n Input String : ");
	gets(str);
	
	len=strlen(str);
	printf("\n\n String : ");
	puts(str);
	
	printf("\n\n The Length of the string is : %d",len);
	printf("\n\n String with lowercase : %s",strlwr(str));
	printf("\n\n String with uppercase : %s",strupr(str));
	printf("\n\n Reverse string is : %s",strrev(str));
	printf("\n\n String by concatenate : %s",strcat(str,str1));
	printf("\n\n Copy string of str1 into str :%s",strcpy(str,str1));
	
}

