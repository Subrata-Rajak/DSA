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

Node *insertAtBeginNaive(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;

        while (curr->next != head)
            curr = curr->next;

        curr->next = temp;
        temp->next = head;
    }
    return temp;
} // O(n)

Node *insertAtBeginEfficient(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;

        int t = head->data;

        head->data = temp->data;
        temp->data = t;

        return head;
    }
} // O(1)

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    head = insertAtBeginEfficient(head, 15);

    printList(head);
}