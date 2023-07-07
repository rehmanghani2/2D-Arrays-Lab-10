/* 3.	Enter a number and show the row and column index.*/
#include <stdio.h>
#define row 3
#define col 3
void print_array(int a[][col]);
void input_in_array(int a[][col]);
void find_row_col_index(int a[][col],int num);
main()
{
	int req_num;
	int array[row][col];
	printf("Enter values in array[%d][%d]:\n",row,col);
	input_in_array(array);
	printf("\nValues in array[%d][%d] are:\n",row,col);
	print_array(array);
	printf("Enter any number:\n");
	scanf("%d",&req_num);
	find_row_col_index(array,req_num);
}
void print_array(int a[][3])
{
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	{	
	printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
void input_in_array(int a[][3])
{
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	{	
	scanf("%d",&a[i][j]);
	}
}
}
void find_row_col_index(int a[][3],int num)
{
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	{	
	if(a[i][j]==num)
	{
	printf("\n%d is found at %d row and %d column a[%d][%d]\n",num,i,j,i,j);
	}
	}
}
}
