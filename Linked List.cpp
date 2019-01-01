#include<bits/stdc++.h>
using namespace std;

  struct Node{
    int data;
    struct Node *next;
  };

  void print(struct Node *n)
  {
    while(n!= NULL)
    {
      cout<<(n->data)<<" ";
      n = n->next;
    }
  }

int main()
{
  struct Node* head = NULL;
    struct Node* second = NULL;

    head  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = NULL;

    print(head);
    return 0;
}
