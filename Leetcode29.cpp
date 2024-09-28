#include<iostream>
using namespace std;
void Missing(int n,int arr[])
{
    int a =0;
    int b=n;
    int temp =0;
    int temp1 =0;
    for(int i=a;i<=b;i++)
    {
        temp = temp +i;
    }
    
    for(int i=0;i<n;i++)
    {
        temp1 = temp1+arr[i];
    }
    int result = temp - temp1;
    cout<<"The missing number in the array is  : "<<result<<endl;

}
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Missing(n,arr);


    return 0;
}