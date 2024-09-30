#include<iostream>
using namespace std;
bool result(int num)
{
    bool found = false;
    for(int i=0;i<num/2;i++)
    {
        if(i*i == num)
        {
            return true;
            found = true;
            break;
        }
        
    }
    if(!found)
    {
        return false;
    }
}
int main()
{
    int num;
    cout<<"Enter the value of num :" <<endl;
    cin>>num;
    bool result1 = result(num);
    if(result1 == true)
    {
        cout<<"true"<<endl;
    }  
    else{
        cout<<"false"<<endl;
    }
    return 0;
}