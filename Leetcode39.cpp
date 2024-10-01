#include<iostream>
using namespace std;
class Solution{
    public:
    int temp[100];
    int k=0;
    int cnt=0;
    int duplicates(int n,int arr[])
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2] && arr[i] == arr[i+2])
            {
                continue;
            }
            else{
                temp[k++] = arr[i];
                cnt++;    
            }
        }
        return cnt;

    }


};
int main()
{
    int n;
    int result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    result = solution.duplicates(n,arr);
    cout<<"The result is : "<<result<<endl;

    return 0;

}


/*
vector<int> temp;  // Temporary vector to store non-duplicate elements
        int cnt = 0;       // Counter for valid elements

        for (int i = 0; i < nums.size(); i++) {
            // Check if the current element is part of a triplet (i.e., 3 consecutive equal elements)
            if (i + 2 < nums.size() && nums[i] == nums[i+1] && nums[i+1] == nums[i+2]) {
                continue;  // Skip if it's a triplet
            } else {
                temp.push_back(nums[i]);  // Add valid element to temp
                cnt++;  // Increment counter
            }
        }

        // Copy elements from temp back to nums
        nums = temp;
        return cnt;*/