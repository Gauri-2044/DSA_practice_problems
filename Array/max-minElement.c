#include<stdio.h>

int max(int arr[],int s)
{
    int max = arr[0];
    for(int i=0;i<s;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
     return max;
}
int min(int arr[],int s)
{
    int min = arr[0];
    for(int i=0;i<s;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main(){
    
    int arr[6] = {4,6,3,-2,9,0};

    int res = max(arr,6);
    printf("The maximum Item of array is : %d",res);
    return 0;
}