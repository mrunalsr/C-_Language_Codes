//Sum of n numbers
#include<iostream>
using namespace std ;
int main()
{
    int n;
    int total = 0;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    for(int i =0;i<=n;i++)
    {
        total = total + i;
    }
    cout<<"The total of n numbers : "<<total;
    return 0;
}