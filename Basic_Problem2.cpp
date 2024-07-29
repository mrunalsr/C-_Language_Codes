//Print 1 to n without using loop
#include<iostream>
using namespace std;
void Display(int No,int current)
{
    if(current>No)
    {
        return;
    }
    cout<<current<<endl;
    Display(No,current+1);
    
}
int main()
{
    int n ;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    Display(n,1);
    return 0;
}