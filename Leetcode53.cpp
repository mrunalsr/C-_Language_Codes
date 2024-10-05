#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums,int n)
    {
        int temp=0;
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1 )
            {
                count++;
                if(count > temp)
                {
                    temp = count;
                }
            }
            else if(nums[i] == 0)
            {
                count=0;
            }     
        }
        return temp;      
    }
    
};
int main()
{
    int n,element,result;
    cout<<"The size of array is : "<<endl;
    cin>>n;
    vector<int> nums;
    cout<<"Enter elements in vector : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        nums.push_back(element);

    }
    cout<<"The eleemnts are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    result = solution.findMaxConsecutiveOnes(nums,n);
    cout<<"The maximum count is  : "<<result<<endl;
    
    return 0;
}