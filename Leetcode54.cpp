#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> constructRectangle(int area){
        int i=1;
        int width=0;
        int length=0;
        while(i*i<=area)
        {
            int mod = area %i;
            if(mod == 0)
            {
                width = i;
                length = area/width;
            }
            i++;
        }
        return {length,width};
        

    }

};
int main()
{
    int area;
    cout<<"Enter the area of rectangle : "<<endl;
    cin>>area;
    Solution solution;
    vector<int> dimension = solution.constructRectangle(area);
    cout<<"Length: "<<dimension[0]<<"Width : "<<dimension[1]<<endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int L = 0, W = 0; // Initialize length and width
        for (int i = 1; i * i <= area; i++) { // Iterate through possible widths
            if (area % i == 0) { // Check if i is a divisor of area
                W = i; // Width
                L = area / i; // Length
            }
        }
        return {L, W}; // Return dimensions as a vector
    }
};

int main() {
    int area;
    cout << "Enter the area of rectangle: ";
    cin >> area;

    Solution solution;
    vector<int> dimensions = solution.constructRectangle(area);

    cout << "Length: " << dimensions[0] << ", Width: " << dimensions[1] << endl;

    return 0;
}
*/