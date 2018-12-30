#include<iostream>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test>0)
  {
    string s;
    cin>>s;
    int len = s.length();
    if(len<=10)
      cout<<s<<endl;
    else
      cout<<s[0]<<(len-2)<<s[len-1]<<endl;
    test--;
  }
return 0;
}
