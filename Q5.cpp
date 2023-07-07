/*5.	Enter any number and find its all additive sequences. 
a.	4 = 1 + 1 + 1 + 1 , 3 + 1, 2 + 2    */
#include <stdio.h>
void additive_sequence(int num,int seq[],int start,int length);
main()
{
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	int arr[100];
	int start=1;
	int length=0;
	additive_sequence(num,arr,start,length);
	return 0;
}
void additive_sequence(int num,int seq[],int start,int length)
{
	if(num==0)
	{
		for(int i=0;i<length;i++)
		{
			printf("%d+",seq[i]);
		}
		printf("\n");
		return;
	}
	else
	{
		for(int i=start;i<=num;i++)
		{
			seq[length]=i;
			additive_sequence(num-i,seq,i,length+1);
		}
	}
}