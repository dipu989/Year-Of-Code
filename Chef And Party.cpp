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
    int array[n];
    for(int i = 0; i<n; i++)
    {
      cin>>array[i];
    }
    sort(array,array+n);
    int flag = 1;
    int people = 0;
    int i = 0;
    while(flag && i<=n)
    {
      if(array[0] == 1){
        cout<<0<<endl;
        flag = 0;
      }
      else if(array[i]>= 0 && array[i]<=people)
        {
          people++;
          i++;
        }
        else if(array[i]>people)
          {
            cout<<people<<endl;
            flag = 0;
          }
    }

    t--;
  }




  return 0;
}
