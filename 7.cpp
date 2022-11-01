/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=2*n;i++)
   {
       int t=(i<=n)?i-1:2*n-i;
       for(int j=1;j<=t;j++)
       {
           cout<<" ";
       }
       int s=(i<=n)?n-i+1:i-n;
       for(int j=1;j<=s;j++)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
  
    return 0;
}
/* 
output generated 
n=5

* * * * * 
 * * * * 
  * * * 
   * * 
    * 
    * 
   * * 
  * * * 
 * * * * 
* * * * *



*/