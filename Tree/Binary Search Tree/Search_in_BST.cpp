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

bool searchInBST(node *root, int key);

int main()
{
    node *root = new node(15);
    root->left = new node(5);
    root->left->left = new node(3);
    root->right = new node(20);
    root->right->left = new node(18);
    root->right->right = new node(80);
    root->right->left->left = new node(16);

    bool searchResult = searchInBST(root, 25);

    if (searchResult)
        cout << "Key is present in the BST" << endl;
    else
        cout << "Key is not present in the BST" << endl;
}

bool searchInBST(node *root, int key)
{
    if (root == null)
        return false;
    else if (root->key == key)
        return true;
    else if (root->key > key)
        return searchInBST(root->left, key);
    else
        return searchInBST(root->right, key);
}