#include <iostream>
#include <vector>
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

Node *naiveReverse(Node *head)
{
    vector<int> arr;

    for (Node *curr = head; curr != NULL; curr = curr->next)
        arr.push_back(curr->data);

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}

Node *efficientReverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = naiveReverse(head);
    recursivePrintList(head);

    head = efficientReverse(head);
    recursivePrintList(head);

    return 0;
}
