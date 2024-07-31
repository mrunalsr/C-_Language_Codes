//sum of digit of a number
#include<iostream>
using namespace std;
int sum_of_digit(int no)
{
    int total =0;
    while(no != 0)
    {
        total = total + (no%10);
        no= no/10;
    }
    return total;
}
int main()
{
    int number,result;
    cout<<"Enter a number here : "<<endl;
    cin>>number;
    result = sum_of_digit(number);
    cout<<"Result is : "<<result;
    return 0;
}