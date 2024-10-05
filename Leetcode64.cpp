#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int maximumProduct(vector<int>& nums)
    {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int temp = (nums[n-1]*nums[n-2]*nums[n-3]);
        int temp1 = (nums[0]*nums[1]*nums[n-1]);
        return max(temp,temp1);
    }

};
int main()
{
    int n,result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    vector<int> nums;
    cout<<"Enter elements in vector :"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        nums.push_back(element);
    }
    cout<<"The vector is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    result = solution.maximumProduct(nums);
    cout<<"The maximum product is : "<<result<<endl;
    return 0;
}