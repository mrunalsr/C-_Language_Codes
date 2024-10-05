#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int minElement(vector<int> nums)
    {
        vector<int> vec(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            while(nums[i] != 0)
            {
                sum = sum + (nums[i] %10);
                nums[i] = nums[i]/10;
            }
            vec[i] = sum;
        }
        int temp=vec[0];
        for(int i=1;i<vec.size();i++)
        {   
            if(temp > vec[i])
            {
                temp = vec[i];
            }
        }
        return temp;
    }

};
int main()
{
    vector<int> vec;
    int n,result;
    cout<<"Enter the size of vector : "<<endl;
    cin>>n;
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }

    cout<<"The vector is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    result = solution.minElement(vec);
    cout<<"The result is : "<<result<<endl;
    return 0;
}