/*#include<iostream>
using namespace std;
class Solution{
    public:
    int k;
    
    int temp[100];
    
    void rotate(int n,int arr[])
    {
       cout<<"enter the value of k"<<endl;
       cin>>k;
       k = k%n;
       for(int i=0;i<k;i++)
       {
            temp[i] = arr[n-k+i];
       }
       for(int i = n-1;i>=k;i--)
       {
            arr[i] = arr[i-k];
       }
       for(int i=0;i<k;i++)
       {
            arr[i] = temp[i];
       }
       cout<<"the array is : "<<endl;
       for(int i=0;i<n;i++)
       {
            cout<<arr[i]<<" ";
       }
       cout<<endl;
       
    
       
    }

};
int main()
{
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in the arrray : "<<endl;
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
    solution.rotate(n,arr);
    return 0;
}
*/


#include<iostream>
using namespace std;

class Solution {
public:
    // Helper function to reverse a part of the array
    void reverseArray(int arr[], int start, int end) {
        while(start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    
    // Function to rotate the array to the right by k steps
    void rotate(int arr[], int n, int k) {
        k = k % n;  // Handle cases where k >= n
        
        // Step 1: Reverse the entire array
        reverseArray(arr, 0, n-1);
        // Step 2: Reverse the first k elements
        reverseArray(arr, 0, k-1);
        // Step 3: Reverse the remaining elements
        reverseArray(arr, k, n-1);
    }
};

int main() {
    int n, k;

    // Take input for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Take input for the array elements
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Take input for the value of k
    cout << "Enter the value of k: ";
    cin >> k;

    Solution solution;
    solution.rotate(arr, n, k);
    
    // Output the rotated array
    cout << "The rotated array is: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
