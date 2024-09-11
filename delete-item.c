#include <stdio.h>
//program to delete an item from array
int main()
{
    int arr[8] = {34,67,89,90,45,78,34,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("BEFORE :\n");
    for (int i=0 ;i<size ; i++)
    {
        printf("\n%d",arr[i]);
    }
    
    int del = 45;
    int indx = 0;
    
    //to find the location of item in array
    while(arr[indx] != del)
    {
        indx++;
    }
    // printf("%d",indx);
    
    for(int i = indx;i<size;i++)
    {
        arr[i] = arr[i+1];//overriding the deleted item
    }
    
    printf("\nAFTER :\n");
    for (int i=0 ;i<size-1 ; i++)
    {
        printf("\n%d",arr[i]);
    }
    
    
    
    return 0;
}