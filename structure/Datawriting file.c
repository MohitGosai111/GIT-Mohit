#include<stdio.h>
main()
{
	file *fptr; //to access the file with pointer file type
	char data[30]="the demo file of c";
	
	//fopen(filename,mode);
	fptr=fopen("myfirstfile.txt","w");
	
	if(fptr==null)//checking that the file is exits or not.
	{
		printf("\n\n file is not opened...");
	}
	else
	{
		if(fptr!=eof) //eof is end of the file position.
		{
			fputs(data,fptr); //to write data  into file. 
			
		}
	}

}
