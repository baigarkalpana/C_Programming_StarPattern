/*
   Author:Kalpan Baigar
   Program to print following star pattern
   
	   *****
	   ** **
	   * * *
	   ** **
	   *****
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
	
	for (i = 1; i <= no; i++) 
    { 
        for (j = 1; j <= no; j++) 
        { 
            if (i==1 || i==no || j==1 || j==no)             
                printf("*");             
            else if(i==j || (i==2 && j==4) || (i==4 && j==2))
                printf("*");  
			else
			    printf(" ");       
        } 
        printf("\n"); 
    } 
		
	
}
	
	
	
	


