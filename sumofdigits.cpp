#include<iostream>
using namespace std;
int sumofdigit(int no)
{
    int sum = 0;
    if(no <0)
    {
        no = -no;
    }
    while(no > 0)
    {
        sum = sum+(no%10);
        no = no/10;
    }
    return sum;
}
int main()
{
    int num=0;
    int result = 0;
    cout<<"enter the number here : "<<endl;
    cin>>num;
    result = sumofdigit(num);
    cout<<"The sum of digits of given number is : "<<result<<endl;
    return 0;
}