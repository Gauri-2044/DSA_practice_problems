#include<stdio.h>

int main()
{
int arr[5] = {34,56,78,90};
int size = sizeof(arr)/sizeof(arr[0]);

int add = 67;
int loc = 3;

for(int i=size-1 ; i>=loc-1; i--)
{
    arr[i+1] = arr[i];
}

arr[loc-1]=add;

printf("After Insertion Your array is : ");
  for (int i=0 ;i<size ; i++)
  {
  printf("\n%d",arr[i]);
  }

return 0;
}