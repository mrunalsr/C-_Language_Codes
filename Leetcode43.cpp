#include<iostream>
using namespace std;
class Solution{
    public:
    int calculate(int n,int gas[],int cost[])
    {
        int temp;
        int result=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(cost[j]-cost[j+1]>0)
                {
                    temp = j+1;
                    
                }
            }
            
        }
        //cout<<temp<<endl;
        result = result+gas[temp];
        //cout<<"result "<<result<<endl;
        int result1 = result;
        //cout<<result1;
        for(int i=temp;i<n;i++)
        {     
            int previousindex = (i+1+n)%n;
            result1 = result1-cost[i]+gas[previousindex];    
        }
        //cout<<"result "<<result1;
        int result2=result1;
        for(int i=0;i<temp;i++)
        {
            result2 = result2-cost[i]+gas[i+1];
            //cout<<result2<<endl;
        }
        if(result2 == gas[temp])
        {
            return temp;
        }
        else
        {
            return -1;
        }
    }

};
int main()
{
    int n;
    int n1;
    int answer;
    cout<<"Enter size of gas array :"<<endl;
    cin>>n;
    int gas[n];
    cout<<"enter the amounts of the gas :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>gas[i];
    }
    cout<<"the amount of gas : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<gas[i]<<" ";
    }
    cout<<endl;
    int cost[n];
    cout<<"enter the costs of the gas :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    cout<<"the costs of gas : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<cost[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    answer = solution.calculate(n,gas,cost);
    cout<<"The solution is :"<<answer<<endl;
    return 0;
}

/*
int totalGas = 0, totalCost = 0;
        int currentGas = 0, startIndex = 0;

        // Calculate total gas and total cost to determine if a solution exists
        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
        }

        // If total gas is less than total cost, no solution exists
        if (totalGas < totalCost) return -1;

        // Find the starting index where the journey can be completed
        for (int i = 0; i < gas.size(); i++) {
            currentGas += gas[i] - cost[i];
            
            // If currentGas is negative, reset starting point to next station
            if (currentGas < 0) {
                startIndex = i + 1;
                currentGas = 0;  // Reset current gas to start fresh
            }
        }
        return startIndex;*/