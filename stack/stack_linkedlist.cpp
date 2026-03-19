// class based,Node struct,push,pop,peek,display,underflow handling
#include<iostream>
#include <stdexcept>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class Stack
{
    private:
        Node* top;
        int size;
    public:
     
        Stack() : top(NULL), size(0) {}
        void push(int value)
        {
            Node *newnode=new Node();
            newnode->data=value;
            newnode->next=top;
            top=newnode;
            size++;
        }
        void pop()
        {
            if(top==NULL)
            {
                cout<<"stack underflow\n";
                return;
            }
            Node*temp=top;
            top=top->next;
            cout<<"popped : "<<temp->data<<endl;
            delete temp;
            size--;
        }
        int peek()
        {
            if(top==NULL)
            {
            throw runtime_error("Stack is empty");             }
            return top->data;
        }
        void display()
        {
            if(top==NULL)
                cout<<"stack empty";
            Node*temp=top;
            cout<<"Top ->";
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }cout<<"NULL";
            cout<<endl;
        }
        ~Stack()
        {
           while(top != NULL)
            {
               Node* temp = top;
               top = top->next;
                delete temp;
            }
        }
};
int main()
{
    Stack S;
    S.push(5);
    S.push(510);
    S.push(25);
    S.push(45);
    S.push(87);
    S.push(3);
    
    S.display();
    
    S.pop();
    
    cout<<"peek value:"<<S.peek()<<endl;
    
    S.push(90);
    
    S.display();
    
    S.pop();
    
    cout<<"peek value:"<<S.peek()<<endl;

    S.pop();
    
    S.display();


    return 0;
}