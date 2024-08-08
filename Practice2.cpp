#include <iostream>
using namespace std;
int sumdigits(int n)
{
    while (n >=10)
    {
        int sum = 0;
        while (n > 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        n = sum;
    }
    return n;
}
int main()
{
    int no;
    int result;
    cout << "enter the value of the number here : " << endl;
    cin >> no;

    result = sumdigits(no);
    cout << "The sum of digits is : " << result;
    return 0;
}