# Linked List implementation


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* insert(Node* root, int data){
    Node* temp = new Node(data);
    if(root==NULL)
      return temp;
    Node* temp1 = root;
    while(temp1->next!=NULL)
      temp1 = temp1->next;
    temp1->next = temp;
  return root;
}

void print(Node* root){
    if(root==nullptr)
      return;
    cout<<root->data<<" ";
    print(root->next);
}

int main()
{
     Node* root = NULL;
     int n,a;
     cin>>n;
     for(int i=0; i<n; i++){
         cin>>a;
         root = insert(root,a);
     }
     print(root);
     cout<<"\n";
  return 0;
}
