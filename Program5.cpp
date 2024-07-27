#include<iostream>
using namespace std;
int sum( int no1,int no2)
{
    return no1+no2;
}
int main()
{
    int value1,value2,result;
    cout<<"enter value of 1st number : ";
    cin>>value1;
    cout<<"Enter the value of 2nd number : ";
    cin>>value2;
    result = sum(value1,value2);
    cout<<"the sum of two numbers is : "<<result<<endl;
    return 0;
}