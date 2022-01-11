#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void printListWithForLoop(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";

    for (Node *curr = head->next; curr != head; curr = curr->next)
        cout << curr->data << " ";
}

void printListWithDoWhileLoop(Node *head)
{
    if (head == NULL)
        return;

    Node *curr = head;

    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    printListWithForLoop(head);
    printListWithDoWhileLoop(head);
}