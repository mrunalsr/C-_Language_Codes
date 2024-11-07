//Insert at any position of the LL 
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
void InsertAtPosition(Node* tail,Node* &head,int position,int d)
{
    if(position == 1)
    {
        InsertAtHead(head,d);
        return;
    }
    //inserting at last position
    //we are updating the tail value because our code is running well without writing this but the tail is pointion to the previous node not next so this is for updating the tail
    
    Node* temp = head;
    int cnt =1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        InsertAtLast(tail,d);
        return;
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
    
    InsertAtPosition(tail,head,1,22); //insert at first
    print(head);
    InsertAtPosition(tail,head,3,22);//insert at middle
    print(head);
    InsertAtPosition(tail,head,4,22);//insert at last
    print(head);
    
    cout<<"head"<<head->data<<" "<<head->next<<endl;
    cout<<"tail"<<tail->data<<" "<<tail->next<<endl;
    return 0;
}