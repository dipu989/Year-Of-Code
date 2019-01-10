#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t>0)
  {
    string s;
    getline(cin,s);
    int count = 0;
    for(int i = 0;i<s.length();i++)
    {
      if(s[i] == ' ')
        count++;
    }
    string array[count+1];
    stringstream ss(s);
    int i = 0;
    while(/*ss.good() && */i< (count+1))
    {
      ss>>array[i];
      ++i;
    }
    int fcount = 0;
    for(int j=0;j<count+1;j++)
    {
      if(array[j] == "not"){
        fcount++;
      }
    }
    if(fcount!=0)
      cout<<"Real Fancy"<<endl;
    else
      cout<<"regularly fancy"<<endl;

    t--;
  }

  return 0;
}
