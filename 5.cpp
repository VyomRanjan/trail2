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
  for(int i=1;i<=n;i++)
  {
      int t=(i%2!=0)?1:0;
      for(int j=1;j<=n;j++)
      {
          if(t==1){
              cout<<t;
              t--;
          }
          else
          {
              cout<<t;
              t++;
          }
      }
      cout<<endl;
  }

    return 0;
}
/* output generated 
n=5
10101

01010

10101

01010

10101  

