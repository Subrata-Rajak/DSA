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

Node *deleteHead(Node *head)
{
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
}

Node *deleteKth(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    if (k == 1)
    {
        Node *temp = deleteHead(head);
        return temp;
    }
    Node *curr = head;

    for (int i = 0; i < k - 2; i++)
        curr = curr->next;

    Node *temp = curr->next;
    curr->next = curr->next->next;

    delete temp;

    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;

    head = deleteKth(head, 3);

    printList(head);
}