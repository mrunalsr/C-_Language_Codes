//Find target sum and return index of it 
#include<iostream>
using namespace std;
void solution(int n,int arr[])
{
    int target;
    cout<<"Enter the target you want : "<<endl;
    cin>>target;
    if(target==0)
    {
        cout<<"No valid target"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(target == arr[i]+arr[i+1])
        {
            cout<<i<<" "<<i+1;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    solution(n,arr);
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

void solution(const vector<int>& arr, int target) {
    if (target == 0) {
        cout << "No valid target" << endl;
        return; // Exit the function early if the target is zero
    }

    bool found = false; // To track if any pairs are found
    int n = arr.size(); // Get the size of the array
    for (int i = 0; i < n - 1; i++) { // Change condition to n - 1
        if (target == arr[i] + arr[i + 1]) {
            cout << "Found indices: " << i << " and " << i + 1 << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No pairs found that add up to the target." << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    vector<int> arr(n); // Use vector for better memory management
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is: " << endl;
    for (const int& num : arr) {
        cout << num << endl;
    }
    cout << endl;

    int target;
    cout << "Enter the target you want: " << endl;
    cin >> target;

    solution(arr, target); // Pass the vector to the solution function

    return 0;
}


*/



