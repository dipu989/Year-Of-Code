#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,m,a;
  long long int i=0,j=0;

  cin>>n>>m>>a;
  if((n%a)==0)
    i = n/a;
  else
    i = ((n/a)+1);
  if((m%a) ==0)
    j = m/a;
  else
    j = (m/a)+1;
    cout<<(i*j)<<endl;
  return 0;
}
