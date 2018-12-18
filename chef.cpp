#include<iostream>
using namespace std;

int main()
{
  int test;
  cin>>test;
  for(int i = 0;i< test; i++)
  {
    int p1,p2,k;
    cin>>p1>>p2>>k;
    int res = (p1+p2)/k;
    if(res%2 == 0)
    {
      cout<<"CHEF"<<endl;
    }
    else{
      cout<<"COOK"<<endl;
    }
  }
  return 0;
}
