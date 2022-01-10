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

Node *recReverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *rest_head = recReverse(head->next);
    Node *rest_tail = head->next;

    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = recReverse(head);

    recursivePrintList(head);
    return 0;
}
