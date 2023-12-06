//C program to swap adjacent elements of a one dimensional array.
#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array 1 :");
    for(int i=0;i<size;i++)
    {
     scanf("%d",&arr[i]);
    }

     for(int i=0;i<size-1;i=i+2)
    {
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    
    }



   


    printf("\nSwap adjacent elements of a one dimensional array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }

    return 0;
}




