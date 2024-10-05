#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> getFinalState(vector<int>& nums,int k,int multiplier)
    { 
        for(int i=0;i<k;i++)
        {
            int index = 0;
            for(int j=1;j<nums.size();j++)
            {
                 if(nums[index] > nums[j])
                {
                    index = j;
                }
            }
            nums[index] *= multiplier;
        }
        return nums;
    }

};
int main()
{
    int n,k,multiplier;
    vector<int> nums;
    cout<<"enter the size of vector : "<<endl;
    cin>>n;
    cout<<"enter elements in the vector "<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        nums.push_back(element);
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<"enter the value of multiplier : "<<endl;
    cin>>multiplier;
    Solution solution;
    vector<int> result = solution.getFinalState(nums,k,multiplier);
    cout<<"The vector is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}