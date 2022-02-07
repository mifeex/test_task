/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array>
 #include <cmath>

using namespace std;

int main()
{
    array<int, 15> A = {11, 6, 84, 49, 14, 0, 3, 24, 37, 12, 32, 18, 9, 4, 23};
    double num = 0;
    
    for(int i = 0; i<15; i++) {
        if(i%2 != 0 && num == 0) num = A[i];
        if(i%2 != 0) num = sqrt(A[i]*num);
    }

    cout<<num;
}
