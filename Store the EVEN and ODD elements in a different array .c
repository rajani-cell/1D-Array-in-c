//C program to create an integer array and store the EVEN and ODD elements in a different array.
#include<stdio.h>
int main()
{
   int size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the  element of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    
     int newsize1=0;
     int result1[100];
     int newsize2=0;
     int result2[100];

     for(int i=0;i<size;i++)
     {
        if(arr[i]%2==0)
        {
             result1[newsize1++]=arr[i];
        }
        else
        {
            result2[newsize2++]=arr[i];

        }

     }

     printf("\nEven number of array :");
     for(int i=0;i<newsize1;i++)
     {
        printf("%d ",result1[i]);
     }

     printf("\nOdd number of array :");
     for(int i=0;i<newsize2;i++)
     {
        printf("%d ",result2[i]);
     }


    
    return 0;
    
}









