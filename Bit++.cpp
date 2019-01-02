#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int res = 0;
  while(n>0)
  {
    string str;
    cin>>str;
    if(str[0] == '+' && str[1] == '+')
      res = res + 1;
    else if(str[1] == '+' && str[2] == '+')
      res = res + 1;
    if(str[0] == '-' && str[1] == '-')
      res = res - 1;
    else if(str[1] == '-' && str[2] == '-')
      res = res - 1;
    n--;
  }
  cout<<res<<endl;
  return 0;
}
