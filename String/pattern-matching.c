#include<stdio.h>
#include<string.h>
//Pattern Matching Algorithm
int main()
{
    char text[] = "abcabcabc";
    char pattern[] = "cab" ;
    // printf("Enter an pattern of size 3 to be searched in Text :");
    // scanf("%s",pattern);
    
    int s = strlen(text);
    //  printf("\n%d",s);
    int r = strlen(pattern);
    //  printf("\n%d",r);
     
    int loc = -1;
    int maxComb = s-r+1;
    //  printf("\n%d",maxComb);
    int i,k=0;
    
    while( k<maxComb)
    {
        // printf("\n k = %d",k);
        for (i = 0;i<r;i++)
        {
        //   printf("\n%d",i);
            if(pattern[i] != text[k+i]){
                break;
            }
        }
    // if(k == 0){
    //     printf("End of loop");
    //     printf("\n%d",i);
    // }
        
        if(i == r){
            loc = k+1;
            break;
        }
        else{
            loc = -1;
            k++;
        }
    
}
    if(loc == -1)
    {
        printf("\nPattern not Found in Text!");
    }
    else{
        printf("\nPattern found at location :%d",loc);
    }
    
    return 0;
}