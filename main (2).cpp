/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k;
    double amount;
    cin>>k;
    
    for(float x=-5; x<2; x+=0.5) {
        amount = (x*x*x)+9*(x*x)+26*x+24;
        
        if(amount != 0) cout<<(k/amount)<<" Сумма не равна 0 \n ";
        else cout<<pow(2, x)<<" "<<x<<" Сумма равна 0 \n ";
    }
}
