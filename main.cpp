/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int m, n, nAmount, mAmount;
    cin>>m>>n;
    
    nAmount = n/m;
    mAmount = m/n;
    
    if(nAmount > mAmount && nAmount <= 3.14) {
        cout<<"n is: "<<n*2;
    }
    
    if(nAmount < mAmount && mAmount <= 3.14) {
        cout<<"m is: "<<m*2;
    }

    return 0;
}
