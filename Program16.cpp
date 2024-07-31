#include<iostream>
using namespace std;
int main()
{

    int a = 7;
    int b = 6;
    int temp =0;
    temp = a;
    a =b;
    b = temp;
    cout<<"Value of a after swapping : "<<a<<endl;
    cout<<"Value of b after swapping : "<<b<<endl;

    return 0;
}
