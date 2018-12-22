#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
while(n>0)
{
  int x,y;
  cin>>x>>y;
  if(y==x)
  {
    if(x%2!=0)
      cout<<(x+(y-1))<<endl;
    else
      cout<<(x+y)<<endl;
  }
  else if(x == (y+2))
    {
      if(x%2 == 0)
        cout<<(x+y)<<endl;
      else
        cout<<(2*y+1)<<endl;
    }
    else
    cout<<"No Number"<<endl;
  n--;
}
  return 0;
}
