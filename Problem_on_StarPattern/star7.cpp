/*
Author-Kalpana Baigar
Program to print following Star Pattern

     *
	***
   *****
  ******* 	    
   
*/


#include <stdio.h>
int main() 
{
   int n,i,j,k;

   n = 5;
  int c=80;

   for(i = 1; i <= n; i++)
   {
   	
   	   for(j=1;j<=n-i;j++)     //space
   	   {
   	   	   printf(" ");
	   }
	   
	   for(k=1;k<=2*k-1;k++)     //star
	   {
	   	  printf("*");
	   }
   	
   	
	  printf("\n");
   }	
   	
   	
  return 0; 	
      
   }

