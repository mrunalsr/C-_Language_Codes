#include<iostream>
using namespace std;
void Display()
{
    int num;
    cout<<"Enter a number between 1 to 100"<<endl;
    cin>>num;

    if(num%3 == 0 && num%5 == 0)
    {
        cout<<"FizzBuzz"<<endl;
    }
    else if(num%3 == 0)
    {
        cout<<"Fizzz"<<endl;
    }
    else if(num%5==0)
    {
        cout<<"Buzzz"<<endl;
    }
    
    
}
int main()
{
    Display();
    return 0;
}