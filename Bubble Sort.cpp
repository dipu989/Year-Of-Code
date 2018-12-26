#include<iostream>

using namespace std;

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubbleSort(int arr[], int size)
{
 for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-i-1;j++)
    {
      if(arr[j]>arr[j+1])
        swap(&arr[j],&arr[j+1]);
    }
  }
}

int main()
{
  int size;
  cout<<"Enter size of array"<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0; i<size-1; i++)
    cin>>arr[i];

  bubbleSort(arr,size);

  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  return 0;
}
