#include<iostream>
using namespace std;
void SumSubArray(int arr[],int n,int k)
{
    if(k>n)
    {
        cout<<"subarray size k is greater than size of array :"<<endl;
        return;
    }
    int max_sum = 0;
    int current_sum = 0;
    int start_index = 0;

    // Calculate the sum of the first subarray of size k
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    max_sum = current_sum;

    // Slide the window over the rest of the array
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start_index = i - k + 1;
        }
    }

    // Display the maximum sum and the subarray
    cout << "Maximum subarray sum of size " << k << " is: " << max_sum << endl;
    cout << "Subarray with the maximum sum is: "
    ;
    for (int i = start_index; i < start_index + k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array : "<<endl;
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
    int k;
    cout<<"enter the value of K "<<endl;
    cin>>k;
    SumSubArray(arr,n,k);
    return 0;
}