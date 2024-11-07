// Insert at head position
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;

}
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    //created a new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next <<endl;

    //head pointing to node1
    Node* head = node1;

    //print linked list
    print(head);
    //Inserting at starting position
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,15);
    print(head);
    return 0;
}