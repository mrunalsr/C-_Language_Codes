#include<iostream>
using namespace std;
void findnum()
{
    int size; 
    int i;
    
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    int max  = arr[0];
    for(int i =1;i<size;i++){
        if(arr[i]>max)
        {
            max = arr[i];
        }

    }
    cout<<"Maximum value is : "<<max<<endl;
   
}
int main()
{
    findnum();

    return 0;
}