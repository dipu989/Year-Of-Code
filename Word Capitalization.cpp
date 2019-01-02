#include<bits/stdc++.h>

using namespace std;

int main()
{
  string str;
  cin>>str;
  if(97<= (int)str[0] && (int)str[0]<= 122)
    {
    str[0] = str[0] - 32;
    cout<<str<<endl;
    }
  else
    cout<<str<<endl;
  return 0;
}
