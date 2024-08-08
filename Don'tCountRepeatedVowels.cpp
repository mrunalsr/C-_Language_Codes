#include<iostream>
using namespace std;
int countvowel(string &str)
{
    int count = 0;
    int i =0;
    int n = str.length();
    int maxfrequency = 0;

    for(int i =0;i<n;i++)
    {
        char currentchar = str[i];
        int currentfrequency = 0;

        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
        {
            for(int j = 0;j<n;j++)
            {
                if(str[i] == currentchar)
            {
                currentfrequency = currentfrequency;
            }
            }

            if(currentfrequency > maxfrequency)
            {
                maxfrequency = currentfrequency;

            }
             
            
        }
    }
    return maxfrequency;
}
int main()
{
    string str;
    int result;
    cout<<"enter the string here : "<<endl;
    cin>>str;

    result = countvowel(str);
    cout<<"The number of vowels in the given string are : "<<result;
    return 0;
}