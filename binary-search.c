// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int key ;
    printf("Enter an Item to be searched in array :");
    scanf("%d",&key);
    
    int lb=0,ub = size-1,loc,mid;
    
    while(lb<=ub)
    {
        mid = (lb+ub)/2;
        // printf("\n%d",mid);
        
        if(arr[mid] == key){
            loc = mid+1;
            printf("\nItem found at :%d",loc);
            break;
        }
        else{
            if(arr[mid] < key)
            {
                lb = mid+1;
            }
            else{
               
                 ub = mid-1;
            }
        }
    }
    
    if(lb>ub)
    {
        printf("\nItem is not present in Array !");
    }
    return 0;
}