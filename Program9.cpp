#include<iostream>
using namespace std;
#define pi 3.14
void area_circle()
{
    int radius;
    cout<<"Enter the value of radius : ";
    cin>>radius;
    float area;
    area = pi*(radius*radius);
    cout<<"Area of circle is : "<<area;
}
void area_square()
{
    int side;
    int area;
    cout<<"Enter the value of side of square : ";
    cin>>side;
    area = side*side;
    cout<<"Area of square is : "<<area;
}
void area_rectangle()
{
    int length;
    int breadth;
    int area;
    cout<<"Enter the length of rectangle : ";
    cin>>length;
    cout<<"Enter the breadth of rectangle : ";
    cin>>breadth;
    area = length*breadth;
    cout<<"Area of rectangle is : "<<area;
}
int main()
{
    int choice;
    cout<<"Enter your choice here :"<<endl;
    cout<<"1 for area of circle"<<endl;
    cout<<"2 for area of square "<<endl;
    cout<<"3 for area of rectangle"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        area_circle();
    }
    else if(choice == 2)
    {
        area_square();
    }
    else if(choice == 3)
    {
        area_rectangle();
    }
    else
    {
        cout<<"Invalid choice";
    }
    return 0;
}