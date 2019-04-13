#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long int array[n];
for(int i = 0; i<n; i++)
{
  cin>>array[i];
}
sort(array,array+n);

long long int aj = array[n-1];
long long int ai = INT_MAX;
int i = 2;
int flag = 1;
while(flag)
{
if(array[n-1]!=array[n-i])
{
  ai = array[n-i];
  flag = 0;
}
else
  i++;
}
if(ai == INT_MAX)
  ai = aj;
cout<<ai%aj<<endl;
  return 0;
}
