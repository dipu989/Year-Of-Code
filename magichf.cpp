#include<iostream>
using namespace std;

int main()
{
  int test;

  cin>>test;
  for(int i = 1;i<=test;i++)
  {
    int N,X,S;
    cin>>N>> X>> S;
    while(S>0)
    {
      int A,B;
      cin>>A >>B;
      if(X==A)
        X = B;
      else if(X==B)
        X = A;
      S--;
    }
    cout<<X<<endl;
  }

  return 0;
}
