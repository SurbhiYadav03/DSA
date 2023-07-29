/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *binaryTree(node *&root)
{
    int data;
    cout << "Enter data"
         << " ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        cout << "Enter left element of " << data << " ";
        root->left = binaryTree(root->left);
        cout << "Enter right element of " << data << " ";
        root->right = binaryTree(root->right);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelorder(node *&root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if (temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
node *buildfromlevelOrder(node *&root)
{
    int data;
    cout << "enter root"
         << " ";
    cin >> data;
    root = new node(data);

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftdata;
        cout << "Enter left ele of " << temp->data << " ";
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        int rightdata;
        cout << "Enter right ele of " << temp ->data << " ";
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}
int main()
{
    cout << "Note:Enter -1 to insert null" << endl;
    node *root = NULL;
    // root = binaryTree(root);
    // levelorder(root);
    // inorder(root);
    // preorder(root);
    // postorder(root);
    buildfromlevelOrder(root);
    levelorder(root);
    return 0;
}
