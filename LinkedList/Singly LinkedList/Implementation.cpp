// 10 -> 20 -> 30 -> NULL < linked list to be created >

#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node *next; // self referential structure

    Node(int x) // constructor
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    // recommended

    Node *head = new Node(10); // initializing
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1; // linking
    temp1->next = temp2;

    return 0;

    /*
    < not recommended >

    shorter version of the main function

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    initializing and linking together
    */
}