#include<iostream>
using namespace std;
#define pi 3.14
float area_circle(int r)
{
    float area;
    area = pi*(r*r);
    return area;
}
int area_square(int s)
{
    int area;
    area = s*s;
    return area;
}
int area_rectangle(int l , int b)
{
    int area;
    area = l*b;
    return area;
}
int main()
{
    int choice;
    cout<<"Enter your choice here : "<<endl;
    cout<<"1 for area of circle "<<endl;
    cout<<"2 for area of square "<<endl;
    cout<<"3 for area of rectangle "<<endl;
    cin>>choice;

    if(choice==1)
    {
        int radius;
        float result;
        cout<<"Enter the radius of circle"<<endl;
        cin>>radius;
        result = area_circle(radius);
        cout<<"area of circle is : "<<result;
    }
    if(choice==1)
    {
        int radius;
        float result;
        cout<<"Enter the radius of circle"<<endl;
        cin>>radius;
        result = area_circle(radius);
        cout<<"area of circle is : "<<result;
    }
    else if(choice==2)
    {
        int side;
        int result;
        cout<<"Enter the side of square"<<endl;
        cin>>side;
        result = area_square(side);
        cout<<"area of square is : "<<result;
    }
    else if(choice==3)
    {
        int length,breadth;
        int result;
        cout<<"Enter the length of rectangle : "<<endl;
        cin>>length;
        cout<<"Enter the breadth of rectangle : ";
        cin>>breadth;
        result = area_rectangle(length,breadth);
        cout<<"area of rectangle is : "<<result;
    }
    else{
        cout<<"Invalid choice";
    }
    return 0;
}