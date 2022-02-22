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

int sizeOfATree(node *root);

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    int size = sizeOfATree(root);

    cout << "The size of this binary tree is: " << size << endl;
}

int sizeOfATree(node *root)
{
    if (root == null)
        return 0;
    else
        return 1 + sizeOfATree(root->left) + sizeOfATree(root->right);
}