#include<bits/stdc++.h>
using namespace std;

int main(){
  int test;
  cin>>test;
  while(test>0)
  {
    int l,r,d;
    cin>>l>>r>>d;
    int i = 1;
    int flag = 1;
    int res;
    while(flag)
    {
        res = d*i;
        if(!(l<=res && res<=r)){
          cout<<res<<endl;
          flag=0;
        }
        else
          i++;
    }
test--;
}
return 0;
}
