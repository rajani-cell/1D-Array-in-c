//C program to add and subtract of Two One Dimensional Array elements.
#include<stdio.h>
int main()
{
    int arr1[100],size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array 1 :");
    for(int i=0;i<size;i++)
    {
     scanf("%d",&arr1[i]);
    }

    int arr2[100];
   
    printf("Enter the element of array 2 :");
    for(int i=0;i<size;i++)
    {
     scanf("%d",&arr2[i]);
    }


    int i,j,k,arr3[100];
    for(i=0,j=0,k=0;i<size,j<size,k<size;j++,i++,k++)
    {
     arr3[k]=arr1[i]+arr2[j];
    }

    
    int arr4[100];
    for(i=0,j=0,k=0;i<size,j<size,k<size;j++,i++,k++)
    {
     arr4[k]=arr1[i]-arr2[j];
    }


    printf("\nArray elements after adding :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr3[i]);
    }


    printf("\nArray elements after subtracting :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr4[i]);
    }

    return 0;
}
