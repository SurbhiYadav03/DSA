#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    node *left;
    node *right;
    int data;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void takeInput(node *&root)
{
    int d;
    cout << "Enter data ";
    cin >> d;

    while (d != -1)
    {
        root = bst(root, d);
        cin >> d;
    }
}
node *bst(node *&root, int data)
{
    node *n = new node(data);
    if (root == NULL)
    {
        return n;
    }
    else
    {
        if (data > root->data)
        {
            root->right = bst(root->right, data);
        }
        if (data < root->data)
        {
            root->left = bst(root->left, data);
        }
    }
}
void leveltraversal(node *&root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    takeInput(root);
    leveltraversal(root);
    return 0;
}