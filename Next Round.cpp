#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i =1; i<=n; i++)
      cin>>arr[i];
  int count = 0;
  int boundary = arr[k];
  for(int i=1;i<=n;i++)
  {
    if(arr[i]>=boundary && arr[i]>0)
      count++;
  }
  cout<<count<<endl;
  return 0;
}
