/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Введите год :-)";
    cin>>year;

    if(year % 100 == 0) {
        if(year % 400 == 0) {
            cout<<"Год високосный";
        }
        else cout<<"Год не високосный";
    }
    else {
        if(year % 4 == 0) {
            cout<<"Год високосный";
        }
        else cout<<"Год не високосный";
    }
}
