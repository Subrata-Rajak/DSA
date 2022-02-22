#include <iostream>
using namespace std;
#define null NULL

struct node
{
    int key;
    node *left;
    node *right;

    node(int val)
    {
        key = val;
        left = right = null;
    }
};

void printAtDistanceK(node *root, int k);

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printAtDistanceK(root, 1);
}

void printAtDistanceK(node *root, int k)
{
    if (root == NULL)
        return;

    if (k == 0)
        cout << root->key << " ";
    else
    {
        printAtDistanceK(root->left, k - 1);
        printAtDistanceK(root->right, k - 1);
    }
}