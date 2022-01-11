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

Node *insertAtEndNaive(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;

        while (curr->next != head)
            curr = curr->next;

        curr->next = temp;
        temp->next = head;
        return head;
    }
} // O(n)

Node *insertAtEndEfficient(Node *head, int x)
{
    Node *temp = new Node(x);

    if(head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;

        int t = temp->data;

        temp->data = head->data;
        head->data = t;

        return temp;
    }
} // O(1)

    int
    main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    head = insertAtEndEfficient(head, 15);

    printList(head);
}