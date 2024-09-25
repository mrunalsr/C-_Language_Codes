#include<iostream>
using namespace std;
void PlusOne(int n,int arr[])
{
    arr[n-1] += 1;
    for(int i=0;i<n;i++)
    {
        if(arr[n-1] >9)
        {
            arr[i] = 0;
            if(i>0){
                arr[i-1] += 1;
            }
        }
    }
    if (arr[0] == 0) {
        cout << "Array size needs to increase. The new number is: 1 ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    cout<<"The array after plus one is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements here : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    PlusOne(n,arr);

    return 0;
}