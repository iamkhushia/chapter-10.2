#include<stdio.h>

int length()
{
	char a[100];
	int i,n=0;
	
	printf("Enter any string = ");
	gets(a);
	
	for(i=0; i<a[i]; i++)
	{
		
		n++;
	}
	printf("Length is = %d",n);
}

void main()
{
	//Write a Program to find the length of the String by passing a string as an argument using UDF.
	
	length();
}