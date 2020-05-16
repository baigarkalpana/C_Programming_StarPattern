/*
   Author:Kalpan Baigar
   Program to print following star pattern
   
	   * * * * *
	   * * * * *
	   * * * * *
	   * * * * *
	   * * * * *
*/

#include<stdio.h>

void display(int);

int main()
{
	int num=0;
	
	printf("enter Number:");
	scanf("%d",&num);
	
	display(num);
	
	return 0;
}

void display(int no)
{
	int i,j;
	
	for(i=0;i<no;i++)
	{
		for(j=0;j<no;j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	
	
	
	
}
