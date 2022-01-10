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

Node *recReverse(Node *curr, Node *prev)
{
    if(curr == NULL)
        return prev;

    Node *next = curr->next;
    curr->next = prev;
    return recReverse(next, curr);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = recReverse(head, NULL);
    recursivePrintList(head);

    return 0;
}
