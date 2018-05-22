#include<bits/stdc++.h>
using namespace std;

struct BstNode{
    int data;
    BstNode*left;
    BstNode*right;
};

BstNode*GetNewNode(int data){

  BstNode* newNode = new BstNode();
  newNode->data = data;
  newNode->left= newNode->right=NULL;
  return newNode;

}

void inorder(BstNode *root)
{
   // if (root==NULL) return;
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
 int FindHeight(BstNode*root){
  if(root==NULL){
    return -1;
  }
  return max(FindHeight(root->left),FindHeight(root->right))+1;
 }

 BstNode* Insert(BstNode*root,int data){
    if(root==NULL){
        root = GetNewNode(data);
        return root;
    }
    else if(data<= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right= Insert(root->right,data);
    }
    return root;

}


bool Search(BstNode*root,int data){
   if(root == NULL)
    return false;
   else if(root->data==data) return true;
   else if(data<= root->data) return Search(root->left,data);
   else return Search(root->right,data);

}

int main(){
    BstNode*root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
     inorder(root);
    int number ;
    cout<<"Enter number be searched : ";
    cin>>number;
    if(Search(root,number)==true)
        cout<<" Found "<<endl;
    else
        cout<<" Not Found "<<endl;
        cout<<FindHeight(root);

  return 0;
}
