#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int test;
  cin>>test;
  for(int i = 0;i<test; i++)
  {
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if((abs(X)+abs(Y))==abs(Z))
    {
      cout<<"yes"<<endl;
    }
    else if((abs(Y)+abs(Z))==abs(X))
    {
      cout<<"yes"<<endl;
    }
    else if((abs(Z)+abs(X))==abs(Y))
    {
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
  return 0;
}
