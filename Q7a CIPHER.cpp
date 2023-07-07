/*7.	Write a C program to create a Caesar encryption.  
Note : In cryptography, a Caesar cipher is a type of substitution in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence.  */
#include <stdio.h>
int len_array(char a[])
{
	int len=0;
	while(a[len]!='\0')
	{
		len++;
	}
	return len;
}
main()
{
	int size=50;
	char arr[50];
	int additive=3;
	printf("Enter string:\n");
	gets(arr);
	int len=len_array(arr);
	for(int i=0;i<=len;i++)
	{
		if(arr[i]>=65 && arr[i]<=90) 
		{
			int x=arr[i]+additive;
			if(x>90)
			{
			arr[i]=64+(arr[i]+additive)%90;	
			}
			else
			{
		    arr[i]=x;			
	        }
	    }
	        if(arr[i]>=97 && arr[i]<=122) 
	        {
	        int x=arr[i]+additive;
	        if(x>122)
			{
			arr[i]=96+(arr[i]+additive)%122;	
			}
			else
			{
		    arr[i]=x;			
	        }
	        }

		}
	printf("\nIn Cipher: %s",arr);
	}