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
   for(int i=1;i<=2*n-1;i++)
   {
       int t=(i<=n)?n-i:i-n;
       for(int j=1;j<=t;j++)
       {
           cout<<" ";
       }
       int k=(i>n)?2*n-i:i;
       for(int j=k;j>=1;j--)
       {
           cout<<j;
       }
       for(int j=2;j<=k;j++)
       {
           cout<<j;
       }
       cout<<endl;
   }

    return 0;
}
/*
output generated
n=4


   1
  212
 32123
4321234
 32123
  212
   1
   
   
   
   */