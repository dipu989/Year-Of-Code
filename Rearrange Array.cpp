#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
      cin>>array[i];
    }
    int temp;
    int arraytemp[n];

    for(int i = 0; i<n; i++)
    {
      arraytemp[i] = array[array[i]];
    }
    for(int i = 0; i<n; i++)
    {
      cout<<arraytemp[i]<<" ";
    }

    t--;
  }


  return 0;
}
