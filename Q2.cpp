/*2.	Write a program to multiply n x n array   */
#include <stdio.h>
#define n 3  // size of n*n array
void print_array(int a[][n]);
void input_in_array(int a[][n]);
void product(int size,int a[][n],int b[][n],int c[][n]);
main()
{
	int size=3;
	int array1[n][n];
	printf("\nEnter values in Array1:\n");
	input_in_array(array1);
	puts("Values in array1 are:");
	print_array(array1);
	int array2[n][n];
	printf("\nEnter values in Array2:\n");
	input_in_array(array2);
	puts("Values in array2 are:");
	print_array(array2);
	int C[n][n];
	product(size,array1,array2,C);
	puts("\nProduct of array1 and array2 is:");
	print_array(C);
}
void print_array(int a[][n])
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{	
	printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
void input_in_array(int a[][n])
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{	
	scanf("%d",&a[i][j]);
	}
}
}
void product(int size,int array1[][n],int array2[][n],int C[][n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		C[i][j]=0;	
		for(int k=0;k<n;k++)
		{
			C[i][j]=C[i][j]+array1[i][k]*array2[k][j];
		}
		}
	}
}