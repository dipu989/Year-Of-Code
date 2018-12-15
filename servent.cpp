#include<iostream>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test>0)
  {
    int n;
    cin>>n;
    if(n<10)
    {
      cout<<"What an obedient servant you are!"<<endl;
    }
    else{
      cout<<-1<<endl;
    }
    test--;
  }
  return 0;
}
