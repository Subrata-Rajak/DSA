// Insert a given item in a given sorted likedlist such that the linked list remain sorted

#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void recursivePrintList(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    recursivePrintList(head->next);
}

Node *sortedInsert(Node *head, int value)
{
    Node *temp = new Node(value);

    if (head == NULL)
        return temp;

    if (value < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;

    while (curr->next != NULL && curr->next->data < value)
        curr = curr->next;

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    head = sortedInsert(head, 45);
    recursivePrintList(head);

    return 0;
}
