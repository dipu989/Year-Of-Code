#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t>0)
{
int n,b;
cin>>n>>b;
vector<int> v;

while(n!=0)
{
    int w,h,p;
    int result;
    cin>>w>>h>>p;
    if(p<=b)
    {
      result = w*h;
      v.push_back(result);
    }
    n--;
}

if(v.size()==0)
  cout<<"no tablet"<<endl;
else{
  sort(v.begin(),v.end());
  cout<<v[v.size()-1]<<endl;
}
  t--;
}





  return 0;
}
