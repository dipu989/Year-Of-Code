#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int test;
cin>>test;
while(test>0)
{
  long n,k,count=0;
  cin>>n>>k;
  long int arr[n+1];
  arr[0] = 0;
  for(int j = 1; j <= n; j++)
  {
    cin>>arr[j];
  }
  for(int z = 0; z < n; z++)
  {
      if(((arr[z+1]-arr[z])%k) == 0)
      {
        count = count + (arr[z+1]-arr[z])/k-1;
      }
      else{
      count = count +(arr[z+1]-arr[z])/k;
    }
  }
  cout<<count<<endl;
  test--;
}
  return 0;
}
