#include<iostream>
using namespace std;
class Solution{
    public:
    string temp[100];
    int k=0;
    void ranks(int n , int arr[])
    {
        int rank[n];
        int rankplace[n];
        for(int i=0;i<n;i++)
        {
            rank[i] = i;
        }
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (arr[rank[i]] < arr[rank[j]]) {
                    int temp = rank[i];
                    rank[i] = rank[j];
                    rank[j] = temp;
                }
            }
        }
         for(int i = 0; i < n; i++) {
            if(i == 0) {
                rankplace[rank[i]] = -1; // Gold Medal
            } else if(i == 1) {
                rankplace[rank[i]] = -2; // Silver Medal
            } else if(i == 2) {
                rankplace[rank[i]] = -3; // Bronze Medal
            } else {
                rankplace[rank[i]] = i + 1; // Remaining ranks
            }
        }
         cout << "Ranks: ";
        for(int i = 0; i < n; i++) {
            if(rankplace[i] == -1) {
                cout << "Gold Medal ";
            } else if(rankplace[i] == -2) {
                cout << "Silver Medal ";
            } else if(rankplace[i] == -3) {
                cout << "Bronze Medal ";
            } else {
                cout << rankplace[i] << " ";
            }
        }
        cout << endl;
    }

};
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in the array : "<<endl;
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
    solution.ranks(n,arr);
    return 0;
}