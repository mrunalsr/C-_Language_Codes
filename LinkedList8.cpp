//Deleting at head & at position & at the end
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
    //destructer
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free node with data "<<value<<endl;
    }
};
void InsertAtLast(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void deleteAtPosition(int position,Node* &head)
{
    //deleting starting node
    if(position == 1)
    {
        Node* temp = head;
        head = head ->next;
        //now we have to free up the memory
        temp->next = NULL; //before freeing up memory we have to deallocate the address for the deleting node node
        delete temp;
    }
    //deleting any middle node or last node
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL; //again we are freeing up memory so firstly deallocate the address of that node who is previously pointing it  
        delete curr;
    }
   
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtLast(tail,12);
    InsertAtLast(tail,15);
    InsertAtLast(tail,1);
    InsertAtLast(tail,18);
    InsertAtLast(tail,22);
    InsertAtLast(tail,8);
    InsertAtLast(tail,2);
    print(head);
    
    deleteAtPosition(4,head); 
    print(head);
    return 0;
}