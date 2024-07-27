#include<iostream>
using namespace std;
#define pi 3.14
float area(int r)
{
    float a ;
    a = pi*(r*r);
    return a;

}
int main()
{
    int radius;
    float area_circle;
    cout<<"enter the radius of circle : ";
    cin>>radius;
    area_circle = area(radius);
    cout<<"The area od circle is : "<<area_circle<<endl;
    return 0;
}