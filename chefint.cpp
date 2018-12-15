#include<iostream>
using namespace std;

int main()
{
  int n,r;
  cin>>n>>r;
  for(int i = 0; i < n; i++ )
  {
    int num;
    cin>>num;
    if(num>=r)
      cout<<"Good boi"<<endl;
    else if(num<r)
      cout<<"Bad boi"<<endl;
  }
  return 0;
}
