#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin>>str;
  set<string> finalSet;
  for(char c: str)
    finalSet.insert(string{c});
    
  int count = 0;
  for(string s : finalSet)
    count++;

  if(count%2==0)
    cout<<"CHAT WITH HER!"<<endl;
  else
    cout<<"IGNORE HIM!"<<endl;
  return 0;
}
