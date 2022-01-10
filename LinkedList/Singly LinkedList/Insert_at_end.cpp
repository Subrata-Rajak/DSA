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

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(40);

    if(head == NULL)
        return temp;

    Node *curr = head;

    while(curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    return head;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    recursivePrintList(head);

    return 0;
}
