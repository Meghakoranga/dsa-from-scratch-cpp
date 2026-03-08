#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int value)
{
    Node* newnode=new Node;
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
        return newnode;
    else
         newnode->next=head;
    return head;
}


void displayList(Node* head)
{
    if(head==NULL)
    {cout<<"\nlist empty";
    return;}
    else
    {Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }}
    cout<<"NULL";
}
int main()
{
    struct Node *head=NULL;
    int beg,value;
    cout<<"\nenter value to be inserted at head:";
    cin>>beg;
    head=insertAtBeginning(head,beg);
    displayList(head);
    return 0;
}