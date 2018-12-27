#include<iostream>
using namespace std;

int main()
{
int n;
while(1)
{
  cin>>n;
  if(n==0)
    break;
  int result = 0;
  for(int i = n; i>0; i--)
  {
    result = result + i*i;
  }
  cout<<result<<endl;
}
  return 0;
}
