#include<iostream>
using namespace std;
class Solution{
    public:
    bool checkTwoChessboards(string coordinate1,string coordinate2)
    {
        int sum =0;
        sum = sum +(coordinate1[0] + coordinate2[0] + coordinate1[1] + coordinate2[1] );
       
        if(sum %2 ==0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

};
int main()
{
    string coordinate1;
    string coordinate2;
    bool result;
    cout<<"Enter 1st coordinate : "<<endl;
    cin>>coordinate1;
    cout<<"Enter 2nd coordinate : "<<endl;
    cin>>coordinate2;

    Solution solution;
    result = solution.checkTwoChessboards(coordinate1,coordinate2);
    if(result == true)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}



/*#include<iostream>
using namespace std;
class Solution{
    public:
    void checkTwoChessboards(string coordinate1,string coordinate2)
    {
        int sum =0;
        sum = sum +(coordinate1[0] + coordinate2[0] + coordinate1[1] + coordinate2[1] );
        cout<<sum;
        if(sum %2 ==0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

};
int main()
{
    string coordinate1;
    string coordinate2;
    bool result;
    cout<<"Enter 1st coordinate : "<<endl;
    cin>>coordinate1;
    cout<<"Enter 2nd coordinate : "<<endl;
    cin>>coordinate2;

    Solution solution;
    solution.checkTwoChessboards(coordinate1,coordinate2);
    
    return 0;
}*/