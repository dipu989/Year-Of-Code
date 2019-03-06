#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test>0)
  {
    int n;
    cin>>n;
    long long int countP = 0;
    long long int countN = 0;

    long long int input;

    for(int i = 0; i<n; i++)
    {
      int input;
      cin>>input;

      if(input>=0)
        {
            countP++;
        }
        else{
              countN++;
        }
    }

    if(countP == n || countN == n)
      cout<<n<<" "<<n<<endl;
    else if(countP > countN)
      cout<<countP<<" "<<countN<<endl;
    else if(countP == countN)
      cout<<countP<<" "<<countP<<endl;
    else
      cout<<countN<<" "<<countP<<endl;

    test--;
}
  return 0;
}
