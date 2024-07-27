#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
    int radius;
    float area;
    cout<<"Enter the value of radius : ";
    cin>>radius;
    area = pi*(radius*radius);

    cout<<"area of circle is : "<<area<<endl;
    return 0;
}