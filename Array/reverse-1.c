//using swapping method
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
   * b = temp;
}
void reverse(int arr[],int s)
{
    int lim;
    if(s%2==0)
    {
        lim = (s/2)-1;
    }
    else{
        lim = s/2;
    }
    for(int i =0 ;i<=lim;i++)
    {
        swap(&arr[i],&arr[s-i-1]);
    }

}
int main(){
    
    int a[4] = {4,5,6,7};
    reverse(a,4);

    for(int i=0; i<4;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}