#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin>>str;
  int len = str.length();
  int size = (len/2) + 1;
  char arr[size] = {0};
  int j = 0;
  for(int i = 0;i<len;i++)
  {
    if(str[i]!= '+'){
      arr[j] = str[i];
      j++;
    }
  }
  sort(arr,arr+size);
  string res = "";
  for(int i = 0; i< size;i++)
  {
    if(i!= (size-1))
      cout<<arr[i]<<"+";
    else
      cout<<arr[size-1]<<endl;
  }

  return 0;
}
