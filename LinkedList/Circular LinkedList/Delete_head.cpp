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

void printList(Node *head)
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

Node *deleteHeadNaive(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == head)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;

    while (curr->next != head)
        curr = curr->next;

    curr->next = head->next;
    delete head;
    return (curr->next);
} // O(n)

Node *deleteHeadEfficient(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
} // O(1)

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    head = deleteHeadEfficient(head);

    printList(head);
}