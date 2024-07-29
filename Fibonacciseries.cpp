#include<iostream>
using namespace std;
void fibonacci(int a)
{
    int x  =0;
    int y = 1;
    int nextterm;
    for(int i =1;i<=a;i++)
    {
        cout<<x <<" ";
        nextterm = x+y;
        x=y;
        y=nextterm;
    }
}
int main()
{
    int n;
    cout<<"Enter no of terms you want in the series : "<<endl;
    cin>>n;
    fibonacci(n);
    return 0;
}