//Creating a node and adding data in it
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;  //node type cha pointer jo next cha address store karel

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};
int main()
{
    Node* node1 = new Node(10);
    cout<<node1 -> data << endl;
    cout<<node1 -> next << endl;
    return 0;
}