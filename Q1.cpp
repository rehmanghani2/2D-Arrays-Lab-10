/* 1.	Write a program to subtract two matrixes  */
#include <stdio.h>
#define row 2
#define col 3
void print_array(int a[][col]);
void input_in_array(int a[][col]);
void add(int a[][col],int b[][col],int c[][col]);
main()
{
	int array1[row][col];
	printf("\nEnter values in Array1:\n");
	input_in_array(array1);
	puts("Values in array1 are:");
	print_array(array1);
	int array2[row][col];
	printf("\nEnter values in Array2:\n");
	input_in_array(array2);
	puts("Values in array2 are:");
	print_array(array2);
	int C[row][col];
	add(array1,array2,C);
	puts("\nSubtraction of array1 and array2 is:");
	print_array(C);
}
void print_array(int a[][3])
{
	for(int i=0;i<=1;i++)
	{
	for(int j=0;j<=2;j++)
	{	
	printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
void input_in_array(int a[][3])
{
	for(int i=0;i<=1;i++)
	{
	for(int j=0;j<=2;j++)
	{	
	scanf("%d",&a[i][j]);
	}
}
}
void add(int array1[][col],int array2[][col],int C[][col])
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		C[i][j]=array1[i][j]-array2[i][j];	
		}
	}
}