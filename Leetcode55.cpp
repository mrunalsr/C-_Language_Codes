#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void findPoisonedDuration(vector<int>& timeSeries, int duration)
    {
        int size = timeSeries.size();
        int totalduration = 0;
        int n = timeSeries[size-1];
        int arr[n];
        for(int i=0;i<size;i++)
        {
            if(timeSeries[i] != 0 && i<=duration)
            {
                :
            }
        }
    }

};
int main()
{
    vector<int> timeSeries;
    int duration,n;
    cout<<"Enter elements in the vector : "<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        timeSeries.push_back(element);
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<timeSeries[i];
    }
    cout<<endl;
    cout<<"Enter the duration : "<<endl;
    cin>>duration;
    Solution solution;
    solution.findPoisonedDuration(timeSeries,duration);

    return 0;
}