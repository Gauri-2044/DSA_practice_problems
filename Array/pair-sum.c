#include<stdio.h>

int* findPair(int a[],int tar,int s)
{
    int res[2];
    res[0] = -1;
    res[1] = -1;
    for(int i =0 ;i<s;i++)
    {
        for(int j =i+1 ;j<s;j++)
        {
            if(a[i] +a[j] == tar)
            {
                res[0] = a[i];
                res[1] = a[j];
                break;
            }
        }
    }
    int *ptr = res;
    return ptr;
}

int main(){

    
    int arr[6] = {4,6,7,3,6,7};
    int target ;
    printf("Enter the targeted sum to be finded : ");
    scanf("%d",&target);

    int *p = findPair(arr,target,6);
    if(p[0]==-1 && p[1]==-1)
    {
        printf("Pair is not present in array");
    }
    else{
         printf("\n Pair is : %d and %d ",p[0],p[1]);
    }
    
    return 0;
}