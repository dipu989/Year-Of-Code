#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  while(n>0)
  {
    int l1,r1,l2,r2;
    int n1,n2;
    int flag = 1;
    cin>>l1>>r1>>l2>>r2;

    n1 = rand()%(r1 - l1 + 1) + l1;

    n2 = rand()%(r2 - l2 + 1) + l2;


while(flag){
    if(n1 != n2){
      cout<<n1<<" "<<n2<<endl;
      flag = 0;
    }
    else{
      n1 = rand()%(r1 - l1 + 1) + l1;
      n2 = rand()%(r2 - l2 + 1) + l2;
    }
}
    n--;
  }
  return 0;
}
