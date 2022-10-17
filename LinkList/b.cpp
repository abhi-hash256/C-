// Move Last Element to Front of a Linked List

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
    temp->next = root;
    root = temp;
  return root;
}

void print(Node* root){
    if(root==nullptr)
      return;
    cout<<root->data<<" ";
    print(root->next);
}

Node* move_to_first(Node* root){
    if(root==nullptr)
      return NULL;
    if(root->next == NULL)
      return root;
    Node* temp = root;
    while(temp->next->next!=NULL)
     {
         temp = temp->next;
     }
     temp->next->next = root;
     root = temp->next;
     temp->next = NULL;
  return root;
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
     root = move_to_first(root);
     print(root);
     cout<<"\n";
  return 0;
}
