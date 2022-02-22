#include <iostream>
#include <queue>
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

void levelOrder(node *root);

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    levelOrder(root);
}

void levelOrder(node *root)
{
    if (root == NULL)
        return;

    queue<node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();

        cout << curr->key << " ";

        if (curr->left != NULL)
            q.push(curr->left);
            
        if (curr->right != NULL)
            q.push(curr->right);
    }
}