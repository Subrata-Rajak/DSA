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

node *insertInBST(node *root, int value);
void printInOrder(node *root);

int main()
{
    node *root = null;
    root = insertInBST(root, 10);
    root = insertInBST(root, 40);
    root = insertInBST(root, 30);
    root = insertInBST(root, 20);
}

node *insertInBST(node *root, int value)
{
    if (root == null)
        return new node(value);
    else if (root->key < value)
        root->right = insertInBST(root->right, value);
    else if (root->key > value)
        root->left = insertInBST(root->left, value);

    return root;
}

void printInOrder(node *root)
{
    if (root != null)
    {
        printInOrder(root->left);
        cout << root->key << " ";
        printInOrder(root->right);
    }
}