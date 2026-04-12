#include<iostream>
#include <stdexcept>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
class Queue
{
    Node*front;
    Node*rear;
    public:
        Queue()
        {front=rear=NULL;}
        void enqueue(int data)
        {
            Node*newnode=new Node{data,NULL};
            
            if(front==NULL)
                {
                    front=rear=newnode;
                }
            else 
            {
                 rear->next=newnode;
                rear=newnode;
            }

        }
        void dequeue()
        {
            if(front==NULL)
            {cout<<" Queue Underflow \n";return;}
            cout<<"Dequeued : "<<front->data<<"\n";
            Node*temp=front;
            if(front == rear)
                {
                    front = rear = NULL;
                }
            else
                {
                    front = front->next;
                }            
            delete temp;
        }
        int peek()
        {
            if(front==NULL)
            {throw runtime_error("Queue is empty");}

            return front->data;
        }
        void display()
        {
            if(front==NULL){cout<<"empty Queue\n";return;}
            Node*temp=front;
            cout<<"Queue : ";
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main()
{
    Queue QL;
    try {
    cout << "Peek: " << QL.peek() << endl;
    }
    catch (exception &e) {
    cout << e.what() << endl;
    }    
    QL.enqueue(5);
    QL.enqueue(34);
    QL.enqueue(55);
    QL.enqueue(01);
    QL.enqueue(67);

    QL.display();

    QL.dequeue();
    cout<<"Peek : "<<QL.peek()<<endl;
    QL.dequeue();

    QL.display();
    return 0;
}