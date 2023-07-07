/*4.	Implement binary search in 2D arrays */
#include <stdio.h>
#define row 3
#define col 3
void print_array(int a[][col]);
void input_in_array(int a[][col]);
int binary_search(int a[][col],int num,int low,int high);
main()
{
	int req_num,index;
	int array[row][col];
	printf("Enter values in array[%d][%d]:\n",row,col);
	input_in_array(array);
	printf("\nValues in array[%d][%d] are:\n",row,col);
	print_array(array);
	printf("Enter any number:\n");
	scanf("%d",&req_num);
	int low=0;
	int high=row*col-1;
	index=binary_search(array,req_num,low,high);
	if(index!=-1)
	{
		 int i=index/col;
		 int j=index%col;
		printf("\n%d is found at row %d and column %d array[%d][%d]",req_num,i,j,i,j);
	}
	else
	{
		printf("\n%d not found\n",req_num);
	}
}
void print_array(int a[][col])
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
void input_in_array(int a[][col])
{
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	{	
	scanf("%d",&a[i][j]);
	}
}
}
int binary_search(int a[][col],int search_num,int low,int high)
{
while(low<=high)
{
	int middle=(low+high)/2;
	int mid_num=a[middle/col][middle%col];  //divide and mod by column
	if(search_num==mid_num)
	{
		return middle;
	}
	else if(search_num>mid_num)
	{
		low=middle+1;
	}
	else
	{
		high=middle-1;
	}
	}
	return -1;	
	
}