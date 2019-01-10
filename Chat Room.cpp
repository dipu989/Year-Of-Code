#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>>s;
  string match = "hello";
  int j = 0, count = 0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i] == match[j])
    {
      count++;
      j++;
    }
  }
if(count!=5)
  cout<<"NO"<<endl;
else
  cout<<"YES"<<endl;


  return 0;
}
