#include<iostream>
using namespace std;

int TrailingZeroes(int n){

  int count = 0;
  for(int i=5;(n/i)>=1;i=i*5)
  {
    count+= (n/i);
  }
  return count;
}

int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    int result = TrailingZeroes(n);
    cout<<result<<endl;
    t--;
  }
  return 0;
}
