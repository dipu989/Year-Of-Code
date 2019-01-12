#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test>0)
  {
    int n,a,b;
    cin>>n>>a>>b;
    int array[n];
    int similar = 0;
    int countb = 0;
    int counta = 0;
    for(int i=0;i<n;i++)
    {
      cin>>array[i];
      if((array[i] %a == 0)&&(array[i] % b == 0))
        similar++;
      else if(array[i] % a == 0)
        countb++;
      else if(array[i] % b == 0)
        counta++;
    }
    if(similar!=0)
    {
      countb++;
      if(countb>counta)
        cout<<"BOB"<<endl;
      else
        cout<<"ALICE"<<endl;
    }
    else{
      if(countb>counta)
        cout<<"BOB"<<endl;
      else
        cout<<"ALICE"<<endl;
    }
    test--;
  }
  return 0;
}
