#include<bits/stdc++.h>
using namespace std;

int main()
{
int w,h,u1,d1,u2,d2;
cin>>w>>h;
cin>>u1>>d1;
cin>>u2>>d2;

int weight = w;
for(int i=h;i>=0;i--)
{
  weight = weight + i;
  if( i == d1)
    weight =weight - u1;
  else if( i == d2)
    weight = weight - u2;

  if(weight<0)
    weight = 0;
}
cout<<weight<<endl;


  return 0;
}
