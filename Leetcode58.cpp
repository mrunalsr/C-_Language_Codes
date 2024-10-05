#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    long long maximumTotalSum(vector<int>& maximumHeight)
    {
        int n = maximumHeight.size();
        long long sum=0;
        /*for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(maximumHeight[j]>maximumHeight[j+1])
                {
                    int temp = maximumHeight[j];
                    maximumHeight[j] = maximumHeight[j+1];
                    maximumHeight[j+1] = temp;
                }
            }
        }*/
       sort(maximumHeight.begin(),maximumHeight.end());
        for(int i=n-2;i>=0;i--)
        {
            if(maximumHeight[i] >= maximumHeight[i+1])
            {
                maximumHeight[i] = maximumHeight[i+1] - 1;
                if(maximumHeight[i] <=0)
                {
                    return -1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            sum += maximumHeight[i];
        }
        cout<<endl;
        return sum;
    }

};
int main()
{
    int n,result;
    vector<int> maximumHeight;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter elemenets in the vector :"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        maximumHeight.push_back(element);
    }
    cout<<"The vector is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<maximumHeight[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    result = solution.maximumTotalSum(maximumHeight);
    cout<<"The maximum sum is : "<<result<<endl;
    return 0;
}