#include<iostream>
using namespace std;
int mySqrt(int x)
{
    if(x<2)
    return x;
    int result =0;
    for(long long i=0;i*i <=x;i++)
    {
        result = i;
    }
    return result;
}
int main()
{
    int x,result;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    result = mySqrt(x);
    cout<<"The result is : "<<result<<endl;
    return 0;
}