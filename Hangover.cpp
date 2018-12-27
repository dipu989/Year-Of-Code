#include<iostream>
using namespace std;

int main()
{
float c;
while(1)
{
  cin>>c;
  if(c == 0.00)
    break;
  float count = 0;
    float sum = 0.00;
    float i = 1.00;
    while(sum<=c)
    {
      sum = sum + (1/(1+i));
      count++;
      i++;
    }
  cout<<count<<" card(s)"<<endl;
}
  return 0;
}
