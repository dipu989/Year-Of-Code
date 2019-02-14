#include<bits/stdc++.h>
using namespace std;

int add(int arr[], int low, int high)
{
  int sum = 0;
  for(int i = low; i<= high; i++)
  {
    sum = sum+arr[i];
  }
  return sum;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i =0; i<n; i++) cin>>arr[i];
  sort(arr,arr+n,greater<int>());
  int sumf = 0;
  int sums = 0;
  for(int i =0; i<n; i++)
  {
    sumf = add(arr,0,i);
    sums = add(arr,i+1,n-1);
    if(sumf>sums) {
      cout<<(i+1)<<endl;
      break;
    }
    if( i == n-1)
    {
      if(sumf<sums){
        cout<<0<<endl;
        break;
      }
    }
  }
  return 0;
}
