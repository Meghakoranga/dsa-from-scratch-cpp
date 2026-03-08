#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node* insertvalue(node*head,int value)
{
    node *newnode=new node();
    newnode->data=value;
    newnode->next=NULL;
    if (head==NULL)
        return newnode;
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
// Reverse Linked List (Recursive)
// Time Complexity: O(n)
// Space Complexity: O(n) due to recursion stack
node*reverse_recursion(node*head)
{
    if(head==NULL ||head->next==NULL)   //base case
        return head;
    node*newhead=reverse_recursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
void display(node*head)
{
    if(head==NULL)
       { cout<<"\nlist is empty\n";return;}
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";

}
int main()
{
    node*head=NULL;
    head=insertvalue(head,5);
    head=insertvalue(head,4);
    head=insertvalue(head,6);
    head=insertvalue(head,3);
    head=insertvalue(head,7);
    display(head);
    head=reverse_recursion(head);
    display(head);
    return 0;

}