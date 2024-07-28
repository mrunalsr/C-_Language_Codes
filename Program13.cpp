//Set values of double at a fixed value
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 12.34567890;
    cout<<x;
    cout<<setprecision(10)<<x<<endl;
    return 0;
}