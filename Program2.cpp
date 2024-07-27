//Flow of program  1)main 2)display
#include<iostream>
using namespace std;
void display()
{
    cout<<"Inside display function"<<endl;
}
int main()
{
    cout<<"In the main function"<<endl;
    display();
    return 0;
}