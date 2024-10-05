#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> getSneakyNumber(vector<int> & nums)
    {
        int n = nums.size();
        vector<int> vec;
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }

};
int main()
{
    int n;
    vector<int> nums;
    cout<<"Enter the size of vector : "<<endl;
    cin>>n;
    cout<<"Enter elements in the vector : "<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        nums.push_back(element);
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    vector<int> vec1 = solution.getSneakyNumber(nums);
    for(int i=0;i<n;i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    return 0;
}