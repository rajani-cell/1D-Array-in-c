//C program to merge Two One Dimensional Arrays elements.
#include<stdio.h>
int main()
{
    int arr1[100],size1;
    printf("Enter the size of array 1 :");
    scanf("%d",&size1);
    printf("Enter the element of array 1 :");
    for(int i=0;i<size1;i++)
    {
     scanf("%d",&arr1[i]);
    }

    int arr2[100],size2;
    printf("Enter the size of array 2 :");
    scanf("%d",&size2);
    printf("Enter the element of array 2 :");
    for(int i=0;i<size2;i++)
    {
     scanf("%d",&arr2[i]);
    }


    int arr3[100];
    for(int i=0;i<size1;i++)
    {
     arr3[i]=arr1[i];
     
    }

    int i,j;
    for(i=size1,j=0;i<size1+size2,j<size2;j++,i++)
    {
     
     arr3[i]=arr2[j];
     
    }

    printf("\nMerge Two One Dimensional Arrays elements :\n");
    for(int i=0;i<size1+size2;i++)
    {
     printf("%d ",arr3[i]);
    }


    return 0;
}
