/*
Author-Kalpana Baigar
Program to print following Star Pattern

****$
***$$
**$$$
*$$$$
$$$$$     
   
*/


#include <stdio.h>
int main() 
{
   int n,i,j,k;

   n = 5;   // number of rows.

   for(i = 1; i <= n; i++)
   {
   	
      for(k=n-i;k>=1;k--)
	  {
	      printf("*");
	  
	  }
	  
	  for(j=1;j<=i;j++)
	  {
	  	printf("$");
	  }
	  printf("\n");
   }	
   	
   	
  return 0; 	
      
   }

