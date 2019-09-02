#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 19;
  int j = 0;
  int bin = 0;
  while(n!=0)
  {
    if(n%2 == 0)
    {
      bin = bin + 0*pow(10,j);
    }
    else{
      bin = bin + 1*pow(10,j);
      cout<<bin<<endl;
    }
    j++;
    n = n/2;
  }

  cout<<bin<<endl;



  return 0;
}
