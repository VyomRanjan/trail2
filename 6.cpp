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
  int j=n;
  int k=0;
  char s='A';
  for(int i=1;i<=3*n+1;i++)
  {
      
      if(i%2!=0)
      {
        int t=(i<=2*n-1)?(--j):(++k);
        for(int m=1;m<=t;m++)
        {
            cout<<" ";
        }
        if(i==1||i==3*n+1)
        {
            cout<<s;
            s=s+1;
            cout<<endl;
            continue;
        }
        cout<<s;
        int g=(i<=2*n-1)?i-2:3*n-i;
        for(int a=1;a<=g;a++)
        {
            cout<<" ";
        }
        cout<<s;
        if(i<2*n-1)
        {
        s=s+1;
        }
        else
        {
            s=s-1;
        }
        cout<<endl;
      }
      else
      {
          cout<<endl;
      }
  }

    return 0;
}
 /*
 output generated 
 n=4
  
  
   A

  B B

 C   C

D     D

 C   C

  B B

   A  
 
*/
