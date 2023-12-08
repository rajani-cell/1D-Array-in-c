//C program to find the intersection of two arrays.


#include<stdio.h>
int main()
{
   int size,arr1[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the  element of array 1:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }


    int arr2[100];
    printf("Enter the element of array 2:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int arr3[100],newsize=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[newsize++]=arr1[i];
            }
            
        }

    }

    printf("\nIntersection :");
    for(int i=0;i<newsize;i++)
    {
     printf("%d ",arr3[i]);
    }

    
   

    return 0;
    
}









