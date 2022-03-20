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
node *getSuccessor(node *root);
node *delNode(node *root, int key);
void printInOrder(node *root);

int main()
{
    node *root = null;
    root = insertInBST(root, 10);
    root = insertInBST(root, 40);
    root = insertInBST(root, 30);
    root = insertInBST(root, 20);

    cout << "Binary Search tree before deletion" << endl;
    printInOrder(root);
    cout << endl;

    delNode(root, 20);
    cout << "Binary Search tree after deleting 20" << endl;
    printInOrder(root);
    cout << endl;
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

node *getSuccessor(node *curr)
{
    curr = curr->right;

    while (curr != null && curr->left != null)
        curr = curr->left;

    return curr;
}

node *delNode(node *root, int key)
{
    if (root == null)
        return root;

    if (root->key > key)
        root->left = delNode(root->left, key);
    else if (root->key < key)
        root->right = delNode(root->right, key);
    else
    {
        if (root->left == null)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == null)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = delNode(root->right, succ->key);
        }
    }
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