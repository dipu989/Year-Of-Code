#include<bits/stdc++.h>
using namespace std;

/*int max(int a, int b)
{
  return (a>b) ? a : b;
}

int min(int a, int b)
{
  return (a<b) ? a : b;
}
*/
int main()
{


  int t;
  cin>>t;
  while(t>0)
  {
    int r,c,k;
    cin>>r>>c>>k;

    int dx,dy;

    dx = min(c+k,8) - max(c-k,1) + 1;
    dy = min(r+k,8) - max(r-k,1) + 1;
    cout<<(dx * dy)<<endl;
    t--;
  }

  return 0;
}
