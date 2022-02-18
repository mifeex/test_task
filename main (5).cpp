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
 int A[1000];
 int n = 1;
 cin>> n;
 // array<int, n> A = {};
 int sArr = 0;
 int sLength = 0;

 for(int i=0;i<n;i++)
 {
     cout<<"M["<<i<<"]=?";
     cin >> A[i];
 }
 
 for(int i = 0; i<n;i++) {
     if(A[i] >= -1 && A[i] <= 10) A[i]=A[i]*5;
     cout<<A[i]<<", ";
 }
}
