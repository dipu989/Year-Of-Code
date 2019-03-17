#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,d;
  cin>>n>>d;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int arrT[d];
  for(int i = 0; i<d; i++)
  {
    arrT[i] = arr[i];
  }
int arrF[n-d];
int z = 0;
for(int i = d; i<n; i++)
{
  arrF[z] = arr[i];
  z++;
}

for(int i = 0; i< (n-d); i++)
{
  cout<<arrF[i]<<" ";
}
  for(int i = 0; i<d; i++)
  {
    cout<<arrT[i]<<" ";
  }

  cout<<endl;



  return 0;
}
