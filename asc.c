#include<stdio.h>
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    printf("ORIGINAL ORDER OF ARRAY\n");
    for (int i = 0; i < 10; i++)
    {
    
        printf("%d\t",arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j <10; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
            
        } 
        printf("\n");
        printf("ASCENDING ORDER OF ARRAY\n");
        for (int i = 0; i < 10; i++)
        {

         printf("%d\t",arr[i]);
        }
    
    return 0;
}