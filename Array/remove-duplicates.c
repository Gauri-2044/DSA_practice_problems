#include<stdio.h>
void delete (int a[],int item,int loc,int size)
{
    for(int i=loc;i<size;i++)
    {
        a[i] = a[i+1];
    }
}
int removeDuplicates(int arr[],int s)
{
    // int *start = &arr[0];
    // int *next ;
    for(int i =0 ;i<s;i++)
    {
        for(int j =i+1 ;j<s;j++)
        {
            if(arr[i] == arr[j])
            {
                delete(arr,arr[j],j,s);
                s--;
            }
        }
    }
    return s;
}
int main(){
    
    int array[6] = {2,4,5,4,2,3};
    int newSize = removeDuplicates(array,6);

    // printf("Array before deleting : \n");
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",array[i]);
    // }
    // delete(array,5,2,5);

    printf("\nArray after deleting : \n");
    for(int i=0;i<newSize;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

//check printing only distinct items 
//reducing size of array after deleting 