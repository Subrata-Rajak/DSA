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

void printPreOrder(node *root);

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printPreOrder(root);
}

void printPreOrder(node *root)
{
    if (root != null)
    {
        cout << root->key << " ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}