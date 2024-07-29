#include <iostream>
using namespace std;
int fact(int a)
{
    int factorial = 1;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {

        for (int i = 1; i <= a; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
}
int main()
{
    int n, result;
    cout << "Enter the value of n :";
    cin >> n;
    result = fact(n);
    cout << "Result is :" << result;
    return 0;
}