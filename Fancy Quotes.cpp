/* This code is giving wrong answers upon exectuting, will check it again*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  int count = 0;

  while(test>0)
  {
  string s;
  cin.ignore();
  getline(cin,s);
  vector<string> v;
  istringstream iss(s);
  for(string s;iss>>s;)
    v.push_back(s);
  for(int j=0;j<v.size();j++)
  {
    if(v[j] == "not")
      count++;
  }
  if(count!=0)
    cout<<"Real Fancy"<<endl;
  else
    cout<<"regularly fancy"<<endl;

  count = 0;
  test--;

}
  return 0;
}
