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

int findMaximumInBT(node *root);

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(40);
    root->left->left = new node(30);

    int max = findMaximumInBT(root);

    cout << "The maximum value in this tree is: " << max << endl;
}

int findMaximumInBT(node *root)
{
    if (root == null)
        return INT_MIN;
    else
        return max(root->key, max(findMaximumInBT(root->left), findMaximumInBT(root->right)));
}