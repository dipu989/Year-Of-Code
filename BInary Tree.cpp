#include<bits/stdc++.h>
using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *NewNode(int data)
{
  struct node* node = (struct node*)malloc (sizeof(struct node));
  node -> data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}

int main(){

  struct node* root = NewNode(1);
  root->left = NewNode(2);
  root->right = NewNode(3);
  getchar();
  return 0;

}

/*
Tree made
         1
      /     \
    2        3
  /  \     /   \
NULL NULL NULL NULL
*/
