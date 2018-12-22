#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      if(arr[i]<=arr[j])
      {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    int am[n];
    int af[n];
    for(int i=0;i<n;i++)
    {
      cin>>am[i];
    }
   for(int j=0;j<n;j++)
    {
      cin>>af[j];
    }
    sort(am,n);
    sort(af,n);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
      sum = sum + am[i]*af[i];
    }
    cout<<sum<<endl;
    t--;
  }
  return 0;
}
