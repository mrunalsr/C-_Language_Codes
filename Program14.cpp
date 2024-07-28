#include<iostream>
using namespace std;
int main()
{
    unsigned short ushort_int = 56 ;
    signed short signed_short = -6;
    int a = 99916543;
    long int long_int = 456789;
    long long int ll_int = 9991654321;

    cout<<"Size of short int : "<<sizeof(short int)<<endl;
    cout<<"Size of int  : "<<sizeof(int)<<endl;
    cout<<"size of long : "<<sizeof(long)<<endl;
    cout<<"size of long long : "<<sizeof(long long)<<endl;
    cout<<"size of int8_t : "<<sizeof(int8_t)<<endl;



    return 0;
}