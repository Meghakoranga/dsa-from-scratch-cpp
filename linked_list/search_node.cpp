#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int value)
{
    Node* newnode= new Node();
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
        return newnode;
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next = newnode;
    
    return head;
}

bool searchValue(Node* head, int value)
{
    Node* temp= head;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->data==value)
        cout<<value<<"is at node"<<count;
            return true;
        temp=temp->next;
        count++;
    }
    
    return false;
    
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
    int n;
    cout<<"enter the size of linked list:";
    cin>>n;
    int list[n],value;
    cout<<"\nEnter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
        head=insertAtEnd(head,list[i]);
    }
    displayList(head);
    cout<<"\nEnter the value to be searched";
    cin>>value;
    cout<<"value found : "<<searchValue(head,value);
    return 0;
}