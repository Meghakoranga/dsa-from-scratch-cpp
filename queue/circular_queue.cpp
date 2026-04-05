#include<iostream>
using namespace std;
class CircularQueue
{
    private:
       int front,rear;
       int *arr;
       int size;

    public:
    CircularQueue(int size)
    {
        front=rear=-1;
        this->size=size;
        arr=new int [size];
    }
    ~CircularQueue()
    {
        delete []arr;
    }
    void enqueue(int data)
    {
        if(front==(rear+1)%size)
            {cout<<"Queue overflow\n";return;}
        
        if(front==-1)
        {   front=rear=0;
            arr[rear]=data;return;
        }
        rear=(rear+1)%size;
        arr[rear]=data;
        return;
    }
  void dequeue()
{
    if(front == -1)
    {
        cout << "Queue underflow\n";
        return;
    }

    cout << "Dequeued: " << arr[front] << endl;

    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}
    int peek()
    {if(front==-1)
        {cout<<"Queue is empty\n";return-1;}
    return arr[front];
    }
    void display()
    {

        if(front==-1)
        {cout<<"queue empty\n";return;}
        cout<<"Queue : ";
        int i=front;
        while(i!=rear)        
        {    cout<<arr[i]<<" ";i=(i+1)%size;}
        cout<<arr[i]<<endl;
        return;
    }
};
int main()
{
    CircularQueue CQ(6);
    CQ.enqueue(56);
    CQ.enqueue(22);
    CQ.enqueue(4);
    CQ.enqueue(67);
    CQ.enqueue(35);

    CQ.display();
    cout<<"Peek value:"<<CQ.peek()<<"\n";

    CQ.enqueue(21);

    CQ.display();

    CQ.dequeue();
    CQ.dequeue();

    CQ.display();

    cout<<"Peek value:"<<CQ.peek()<<"\n";

    CQ.enqueue(81);
    CQ.enqueue(9);
    CQ.enqueue(31);

    cout<<"Peak value:"<<CQ.peek()<<"\n";

    CQ.display();

    return 0;
}