#include<stdio.h>

array(int a[],int n)
{
	int i,sum=0;
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	printf("sum of array = %d",sum);
}

void main()
{
	//Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
	
	int n;
	
	printf("how many element in array = ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	array(a,n);
}