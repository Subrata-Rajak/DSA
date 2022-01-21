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

void printNthFromEndUsingLength(Node *head, int n)
{
    int ln = 0;
    for (Node *curr = head; curr != NULL; curr = curr->next)
        ln++;

    if (ln < n)
        return;

    Node *curr = head;

    for (int i = 1; i < ln - n + 1; i++)
        curr = curr->next;

    cout << (curr->data) << " ";
}

void printNthFromEndUsingTwoPointers(Node *head, int n)
{
    if (head == NULL)
        return;

    Node *first = head;

    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;

        first = first->next;
    }

    Node *second = head;

    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << (second->data);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printNthFromEndUsingLength(head, 2);
    printNthFromEndUsingTwoPointers(head, 3);

    return 0;
}
