//traversing array
#include <stdio.h>

int main() {

  int arr[6] = {3,45,67,6,8,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  printf("Your array is : ");
  for (int i=0 ;i<size ; i++)
  {
      
  printf("\n%d",arr[i]);
  }

    return 0;
}