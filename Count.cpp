#include<iostream>
using namespace std;
void findCount()
{
    int size;
    char MostFrequent = '\0';
    int maxfrequency = 0;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    char arr[size];
    cout<<"enter the array of character here: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The input array is : "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    for(int i = 0;i<size;i++)
    {
        char currentchar = arr[i];
        int currentfrequency = 0;

        for(int j =0;j<size;j++)
        {
            if(arr[j] == currentchar)
            {
                currentfrequency++;
            }
        }

        if(currentfrequency > maxfrequency)
        {
            maxfrequency = currentfrequency;
            MostFrequent = currentchar;
        }
    }
    cout<<"Most frequent char is : "<<MostFrequent<<endl;
    cout<<"The count of that char is : "<<maxfrequency<<endl;



}
int main()
{
    findCount();
    return 0;
}