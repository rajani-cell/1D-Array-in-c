//C program to create array with reverse elements of one dimensional array.
#include<stdio.h>
int main()
{
    int arr1[100],size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array :");
    for(int i=0;i<size;i++)
    {
     scanf("%d",&arr1[i]);
    }


    int arr2[100];
    int i,j;

    for(j=0,i=size-1;i>=0,j<size;i--,j++)
    {

       arr2[j]=arr1[i];
    }



    printf("Reverse array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr2[i]);
    }


    return 0;
}




