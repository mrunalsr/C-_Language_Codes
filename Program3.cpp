#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    //int value = 10;int value2=11;
    int value1 = 10,value2=11;
    int result;
    result = sum(value1,value2);
    cout<<"The sum of two numbers are : "<<result<<endl;
    return 0;
}