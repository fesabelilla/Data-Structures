#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
    Node* par;
};

Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = node -> par = NULL;
    return (node);
}

Node* insertLevelOrder(int arr[], Node* root,int i, int n)
{
    if (i < n)
    {
        Node* temp = newNode(arr[i]);
        root = temp;
        temp -> par = root;
        root->left = insertLevelOrder(arr,root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(arr,root->right, 2 * i + 2, n);
    }
    return root;
}


void inorder (Node *root)
{
    if (root != NULL)
    {
        inorder(root -> left);
        cout << root -> data << " ";
        inorder(root -> right);
    }
}

void preorder (Node * root)
{
    if (root != NULL)
    {
        cout << root -> data << " ";
        preorder(root -> left);
        preorder(root -> right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root -> left);
        postorder(root -> right);
        cout << root ->data << " ";
    }
}

void nonrecursuvepreorder(Node *root)
{
    stack <Node*> st;
    st.push(root);
    while (!st.empty())
    {
        Node *t = st.top();
        st.pop();
        if (t != NULL)
        {
            cout << t ->data << " ";
            st.push(t->right);
            st.push(t->left);
        }
    }
}

void nonrecursuvepostorder(Node *root)
{
    map<Node*, bool> visited;
    stack <Node*> st;
    st.push(root);
    while (!st.empty())
    {
        Node *t = st.top();
        if (t -> left != NULL && visited[t -> left] == false)
        {
            st.push(t->left);
        }
        else
        {
            if (t -> right != NULL && visited[t -> right] == false)
            {
                st.push(t -> right);
            }
            else
            {
                cout << t -> data << " ";
                visited[t] = true;
                st.pop();
            }
        }
    }
}



int main()
{
    int n;
    int ar[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    Node* root = insertLevelOrder(ar, root, 0, n);
    preorder(root);
    cout << endl;
    nonrecursuvepreorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    nonrecursuvepostorder(root);
    cout << endl;
    inorder(root);
    cout << endl;

    return 0;
}

