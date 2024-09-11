#include<stdio.h>

void reverse(int arr[],int s)
{
int newArr[s] ;
for(int i=0;i<s;i++)
{
    newArr[i] = arr[s-i-1];
}
for(int i=0; i<4;i++)
    {
        printf("\n%d",newArr[i]);
    }
// return newArr;
}
int main(){
    
    int a[4] = {4,5,6,7};
    reverse(a,4);

    // for(int i=0; i<4;i++)
    // {
    //     printf("\n%d",arr[i]);
    // }
    return 0;
}