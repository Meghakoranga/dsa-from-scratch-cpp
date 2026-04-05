#include<iostream>
using  namespace std;
class LinearQueue
{
    int front,rear;
    int *arr;
    int size;
    public:
    LinearQueue(int size)
    {
        front=rear=-1;
        this->size=size;
        arr=new int[size];
    }
    void enqueue(int data)
    {
        if(rear==size-1)    
        { cout<<"\noverflow condition";return;}
        else if (front==-1)
        {
            front=0;
            arr[++rear]=data;
        }
        
        else
        {
            rear++;
            arr[rear]=data;
        }
    }
    void dequeue()
    {
        if(front==-1)
            {cout<<"\nUnderflow condition";return;}
        cout<<"Dequeued:"<<arr[front];
        if (front==rear)
            front=rear=-1;
        else
            front++;
        
    }
    int peek()
    {
        if(front==-1)
            {   cout<<"Queue empty";
                return -1;
            }
        
        return arr[front];
    }
    void display_queue()
    {
        if(front==-1)
        {
            cout<<"queue is empty";return;
        }
        cout<<"\ncurrent queue elements are : ";
        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    ~LinearQueue()
    {
        delete []arr;
    }
};

int main()
{
    LinearQueue Q(5);
    Q.enqueue(45);
    Q.enqueue(9);
    Q.enqueue(5);
    Q.enqueue(10);
    Q.enqueue(30);

    Q.display_queue();

    Q.dequeue();
    Q.display_queue();

    Q.dequeue();
    Q.display_queue();

    cout<<"the peek value is "<<Q.peek()<<endl;
    return 0;
}