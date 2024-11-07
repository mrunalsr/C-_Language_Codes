//Insert at the head position 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
};
void InsertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtLast(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtPosition(Node* &head,int position,int d)
{
    if(position == 1)
    {
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert->next = temp->next;
    
    temp->next = nodeToInsert;
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    InsertAtLast(tail,12);
    print(head);
    
    InsertAtLast(tail,15);
    print(head);
    
    InsertAtPosition(head,1,22);
    print(head);
    
    return 0;
}