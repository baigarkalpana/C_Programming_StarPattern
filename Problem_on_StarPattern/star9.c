/*
Author-Kalpana Baigar
Program to print following Star Pattern

     *
	* *
   *   *
  ******* 	    
   
*/


#include <stdio.h>
int main() 
{
   int n,i,j,k;

   n = 5;
  int c=20;
   int d=c/2;
   for(i = 1; i <= n; i++)
   {
   	
   	   for(j=1;j<=(d-i);j++)     //space
   	   {
   	   	   printf(" ");
	   }
	   
	   for(k=1;k<=2*i-1;k++)     //star
	   {
	   	   if(i==n || k==1 || k==2*i-1)
	   	   {
	   	       printf("*");
				  	
		   }
		   else
		   {
		   	   printf(" ");
		   }
	   	  
	   }
   	
   	
	  printf("\n");
   }	
   	
   	
  return 0; 	
      
   }

