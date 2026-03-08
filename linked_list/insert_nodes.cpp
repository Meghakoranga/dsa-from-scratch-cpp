#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int value)
{
    Node* newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL)
        return newnode;

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;

    return head;
}

void displayList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " → ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int countNodes(Node* head)
{
    int count = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    Node* head = NULL;

    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> value;
        head = insertAtEnd(head, value);
    }

    displayList(head);

    cout << "Total nodes: " << countNodes(head);
}