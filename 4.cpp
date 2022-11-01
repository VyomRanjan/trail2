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
    int n, t = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int k = 1; k <= n-i; k++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                t = 1;
            else
                t = t*(i-j+1)/j;

            cout << t << "   ";
        }
        cout << endl;
    }

    return 0;
}
/* output generated 
here n is no. of rows 
n=6
               1

             1   1

           1   2   1

         1   3   3   1

       1   4   6   4   1

     1   5  10  10   5   1 
