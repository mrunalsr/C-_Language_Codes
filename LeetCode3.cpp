#include<iostream>
using namespace std;
int convertroman(string str)
{
    int n = str.length();
    int left=0;
    int right = n;
    int count=0;
    if(n>15)
    {
        cout<<"Not valid input "<<endl;
    }
    while(left<right)
    {
        if(str[left] == 'I' && left+1<n && str[left+1] == 'V')
        {
            count = count +4;
            left+=2;
        }
        else if(str[left] == 'I' && left+1<n && str[left+1] == 'X')
        {
            count = count + 9;
            left+=2;
        }
        else if(str[left] == 'I')
        {
            count = count + 1;
            left++;
        }
        else if(str[left] == 'V')
        {
            count = count+5;
            left++;
        }
        else if(str[left] == 'X' && left+1 <n && str[left+1] == 'L')
        {
            count = count +40;
            left+=2;
        }
        else if(str[left] == 'X' && left+1 <n && str[left+1] == 'C')
        {
            count = count +90;
            left+=2;
        }
        else if(str[left] == 'X')
        {
            count = count+10;
            left++;
        }
        else if(str[left]== 'L')
        {
            count = count+50;
            left++;
        }
        else if(str[left]=='C' && str[left+1] == 'M')
        {
            count = count + 900;
            left+=2;
        }
        else if(str[left] == 'X' && str[left+1] == 'C')
        {
            count = count +90;
            left+=2;
        }
        else if(str[left] == 'C')
        {
            count=  count+100;
            left++;
        }
        else if(str[left] == 'D')
        {
            count = count+ 500;
            left++;
        }
        else if(str[left] == 'M')
        {
            count= count+1000;
            left++;
        }
        
        

    }
    return count;
    
}
int main()
{
    string str;
    int result;
    cout<<"Enter the string here : "<<endl;
    cin>>str;
    result = convertroman(str);
    cout<<"The roman in integer is : "<<result;
    return 0;
}