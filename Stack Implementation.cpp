#include<bits/stdc++.h>

using namespace std;
#define MAX 100

class Stack
{
  int top;
public:
  int a[MAX];
  Stack(){
    top = -1;
  }
  bool push(int x);
  int pop();
  bool isEmpty();
};
bool Stack::push(int x) {
  if(top >= MAX-1)
    {
      cout<<"Stack Is Full"<<endl;
      return false;
    }
    else{
      a[++top] = x;
      cout<<x<<" is pushed into stack"<<endl;
      return true;
    }
}

int Stack::pop()
{
  if(top<0)
    {
      cout<<"Stack Underflow"<<endl;
      return 0;
    }
    else{
      int x = a[top--];
      return x;
    }
}

bool Stack::isEmpty()
{
  return(top<0);
}

  int main()
  {
      struct Stack s;
      s.push(10);
      s.push(20);
      s.push(30);
      cout<<s.pop() << " Popped from stack\n";

      return 0;
  }
