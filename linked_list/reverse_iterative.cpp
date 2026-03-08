#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node* insertnode(node* head, int value)
{
    node* newnode= new node();
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
        return newnode;
    node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next = newnode;
    
    return head;
}
// Reverse Linked List (Iterative)
// Time Complexity: O(n)
// Space Complexity: O(1)
node* reverseIterative(node* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    node*prev=NULL;
    node*current=head;
    while(current!=NULL)
    { 
       node*nextnode=current->next;
        current->next=prev;
        //updating nodes
        prev=current;
        current=nextnode;
    }
    
    return prev;
}
void displayList(node* head)
{
    if(head==NULL)
    {cout<<"\nlist empty";
    return;}
    else
    {node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }}
    cout<<"NULL\n";
}
int main()
{
    node*head=NULL;
    head=insertnode(head,5);
    head=insertnode(head,8);
    head=insertnode(head,9);
    head=insertnode(head,3);
    head=insertnode(head,2);
    head=insertnode(head,1);
    displayList(head);
    head=reverseIterative(head);
    displayList(head);
    return 0;
}