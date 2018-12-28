#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int binaryS(int arr[],int low,int high,int value)
{

  if(high>=low)
  {
    int mid = (low+high)/2;
  if(arr[mid] == value)
    return mid;
  else if(arr[mid] < value)
    return binaryS(arr,mid+1,high,value);
  else
    return binaryS(arr,low,mid-1,value);
  }
  return -1;
}

int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);

  int count = 0;
  for(int i=0;i<n-1;i++)
  {
      if(binaryS(arr,i+1,n-1,arr[i]+k)!= -1){
        count++;
      }
  }
  cout<<count<<endl;
  return 0;
}
