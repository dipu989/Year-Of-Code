#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin>>str;
    int counto = 0;
  int countz = 0;
  char arro[7] = {'1','1','1','1','1','1','1'};
  char arrz[7] = {'0','0','0','0','0','0','0'};
  int i = 0;
  for(int j = 0; j < str.length() ; j++)
  {
    if(str[j] == arro[i])
    {
      i++;
      counto++;
      if(counto == 7)
        break;
    }
    else if(str[j] != arro[i])
    {
      i = 0;
      counto = 0;
    }
}

int z = 0;
for(int j = 0; j < str.length() ; j++)
{
  if(str[j] == arrz[z])
  {
    z++;
    countz++;
    if(countz == 7)
      break;
  }
  else if(str[j] != arrz[i])
  {
    z = 0;
    countz = 0;
  }
}

if(counto == 7 || countz == 7)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

  return 0;
}
