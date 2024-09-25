#include<iostream>
using namespace std;
int climbstairs(int n)
{
    int first = 1;
    int second = 2;
    int result =0;
    if(n == 1) return 1;
    if(n == 2) return 2;

    for(int i = 3;i<=n;i++)
    {
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}
int main()
{
    int n,result;
    cout<<"enter the number of steps "<<endl;
    cin>>n;
    result = climbstairs(n);
    cout<<"The result is : "<<result<<endl;

    return 0;
}