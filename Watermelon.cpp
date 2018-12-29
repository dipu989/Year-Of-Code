#include<iostream>
using namespace std;

int main()
{
  int w;
  cin>>w;
  if(w<=2)
    cout<<"NO"<<endl;
  else if(w%2 == 0)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  /*
  int count = 0;
  for(int i =2; i<=w; i= i+2)
  {
    if((w-i)%2 == 0)
      {
        count++;
      }
  }
  if(count!= 0 )
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;*/
  return 0;
}
