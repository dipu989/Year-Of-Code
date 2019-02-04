#include<bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    int aattack[n];
    int adefend[n];
    for(int i=0;i<n;i++)
    {
      cin>>aattack[i];
    }
    for(int j = 0; j<n; j++)
    {
      cin>>adefend[j];
    }
   vector<int> v;
   for(int i = 0 ;i<n ;i++)
   {
     if(i==0)
     {
       if(!((aattack[i+1]+aattack[n-1])>=adefend[i]))
        v.push_back(adefend[i]);
     }
     else if(i == n-1)
     {
       if(!((aattack[i-1]+aattack[0])>=adefend[i]))
        v.push_back(adefend[i]);
     }
     else
     {
       if(!((aattack[i-1]+aattack[i+1])>=adefend[i]))
        v.push_back(adefend[i]);
     }
   }

   if(v.size() == 0)
   {
     cout<<"-1"<<endl;
   }
   else{
      sort(v.begin(),v.end());
      cout<<v[v.size()-1]<<endl;
   }
    t--;
  }
  return 0;
}
