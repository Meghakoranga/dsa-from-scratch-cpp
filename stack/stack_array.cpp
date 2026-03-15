#include<iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if(top == size - 1)
        {
            cout << "Stack overflow\n";
            return;
        }

        arr[++top] = element;
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack underflow\n";
            return;
        }

        cout << "Popped: " << arr[top--] << endl;
    }

    int peek()
    {
        if(top == -1)
        {
            cout << "Stack empty\n";
            return -1;
        }
        return arr[top];
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack empty\n";
            return;
        }

        cout << "Stack (top → bottom): ";
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(34);
    st.push(67);

    st.display();

    st.pop();
    st.display();

    st.push(3);
    cout << "Peek: " << st.peek() << endl;

    st.push(24);
    st.pop();

    st.push(29);
    st.display();
}