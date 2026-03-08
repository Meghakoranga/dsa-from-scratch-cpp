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

Node* deleteValue(Node* head, int value)
{
    if(head==NULL) 
        {cout<<"\nlist is empty";return head;}
    Node *current=head;
    Node* prev=NULL;
    if(head->data==value) //1.delete head
        {
             head=head->next;
            delete current;
            return head;        
        }
         //2.delete middle node and last node
     while(current!=NULL)
        {
            if(current->data==value)    
                {
                    prev->next=current->next;
                        delete current;
                        return head;
                }
            prev=current;
            current=current->next;
        }
    cout<<"\nvalue not found";
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
    int n;
    cout<<"enter the size of linked list:";
    cin>>n;
    int list[n];
    cout<<"\nEnter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
        head=insertAtEnd(head,list[i]);
    }
    int value;
    displayList(head);
    cout<<"\nenter the value you want to delete:";
    cin>>value;
    head=deleteValue(head,value);
    displayList(head);
    return 0;
}