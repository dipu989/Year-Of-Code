#include<bits/stdc++.h>
using namespace std;

int main()
{
 char rank[] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
 char suit[] = {'D','C','S','H'};
 string ms;
 cin>>ms;
 string s1,s2,s3,s4,s5;
 cin>>s1>>s2>>s3>>s4>>s5;
if((ms[0] == s1[0]) || (ms[0] == s2[0]) || (ms[0] == s3[0]) ||(ms[0] == s4[0]) || (ms[0] == s5[0]) || (ms[1] == s1[1]) || (ms[1] == s2[1]) || (ms[1] == s3[1])|| (ms[1] == s4[1]) || (ms[1] == s5[1]))
{
  cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;
}





  /* for(int j = 0;j<13;j++)
   {
     if(ms[0] == rank[j])
     {
       cout<<"YES"<<endl;
       break;
     }
   }

   for(int j = 0;j<4;j++)
   {
     if(ms[1] == rank[j])
     {
       cout<<"YES"<<endl;
       break;
     }
   }
 }*/
 /*cout<<(int)s1[0]<<endl;
 cout<<(int)rank[0]<<endl;*/
  return 0;
}
