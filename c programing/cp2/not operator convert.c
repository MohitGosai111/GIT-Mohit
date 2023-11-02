#include<stdio.h>
main(){
	
	int n1,n2;
	n1=10;
	n2=20;
	
	//if condition is returning o/p as true.but
	//!not operator will convert it into false condition.
	
	if(!(n1>0&&n2>0))//logical not operator
	printf("\n\n\t both the members are greater than zero....");
	
	else
	printf("\n\n\t both the members are less than zero....");
	
}
