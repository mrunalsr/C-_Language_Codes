#include<iostream>
using namespace std;
int main()
{
    int size;
    int i =0;
    cout<<"Enter size of list : "<<endl;
    cin>>size;
    int list[size];
    cout<<"Enter the numbers in the list : "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>list[i];
    }
    cout<<"The list is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<list[i]<<" "<<endl;;
    }

   
    for(int i=0;i<size-1;i++)
    {
        for(int j = 0;j<size-i-1;j++)
        {
            if(list[j]>list[j+1])
            {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
   cout<<"Sorted array is : "<<endl;
   for(i =0;i<size;i++)
   {
    cout<<list[i]<<" ";
   }
    
    return 0;

}