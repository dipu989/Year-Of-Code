#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,r;
  cin>>n>>k>>r;
  int i = 1;
  int flag = 1;
  while(flag)
  {
    if(r>k)
    {
      cout<<n<<endl;
      flag = 0;
    }
    else{
      if(r*i <= k)
      {
        n--;
        k = k - r*i;
        i++;
      }
      else{
        cout<<n<<endl;
        flag = 0;
      }
    }
  }



  return 0;
}
