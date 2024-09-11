#include<stdio.h>
//Linear Search

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int key;
    printf("Enter an Item to be searched in array :");
    scanf("%d",&key);
    
    int loc = -1;
    for(int i=0 ;i<size ;i++)
    {
        if(arr[i] == key)
        {
            loc = i+1;
            break;
        }
    }
    
    if(loc == -1){
        printf("Item not found in array !");
    }
    else{
        printf("Item is present in array at location :%d",loc);
    }
    return 0;
}