/*
Author-Kalpana Baigar
Program to print following Star Pattern

    *
   **
  * *
 *  *
*****     
   
*/

#include <iostream>

using namespace std;

int main()
{
    int i, j, rows;

   
    cout<<"Enter number of rows : ";
    cin>>rows;

   
    for(i=1; i<=rows; i++)
    {
        
        for(j=i; j<rows; j++)
        {
           cout<<" ";
        }

        
        for(j=1; j<=i; j++)
        {
            /*
             * Print star for last row(i==row),
             * first column(j==1) and
             * last column(j==i).
             */
            if(i==rows || j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<"\n";
    }

    return 0;
}
