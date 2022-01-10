/*
Seach 20 in 10 -> 5 -> 20 -> 15
O/P is 3

Search 20 in 10 -> 15
O/P is -1

Search 3 in 3 -> 20 -> 5
O/P is 1
*/

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

// Iterative
int search(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;

    while (curr != NULL)
    {
        if (curr->data == x)
            return pos;

        else
        {
            pos++;
            curr = curr->next;
        }
    }

    return -1;
}

// Recursive
int recursiveSearch(Node *head, int x)
{
    if (head == NULL)
        return -1;

    if (head->data == x)
        return 1;
    else
    {
        int res = recursiveSearch(head->next, x);

        if (res == -1)
            return -1;
        else
            return res + 1;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);

    int pos = search(head, 20);

    if (pos == -1)
        cout << "The key does not exist" << endl;
    else
        cout << "Found key at " << pos << endl;
    return 0;
}
