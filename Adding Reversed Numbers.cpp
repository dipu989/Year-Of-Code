#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int rev(int num)
{
  int revn = 0;
  while(num!=0)
  {
  revn = revn*10 + num%10;
  num = num/10;
  }
  return revn;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test;
  cin>>test;
  while(test)
  {
    int n,m;
    cin>>n>>m;
    int sum = rev(rev(n) + rev(m));
    cout<<sum<<endl;
    test--;
  }

  return 0;
}
