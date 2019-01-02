#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int countf = 0;
  while(n>0)
  {
    int arr[3];
    for(int i=0;i<3;i++)
      cin>>arr[i];
    int counto = 0;
    for(int i=0;i<3;i++)
      {
        if(arr[i] == 1)
          counto++;
      }
      if(counto>=2)
        countf++;
    n--;
  }
  cout<<countf<<endl;
  return 0;
}
