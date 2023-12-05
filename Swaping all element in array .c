//Swaping all element in array.
#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array :");
    for(int i=0;i<size;i++)
    {
     scanf("%d",&arr[i]);
    }


    int temp;
    for(int i=0;i<size/2;i++)
    {
     
     int temp=arr[i];
     arr[i]=arr[size-i-1];
     arr[size-i-1]=temp;

    }


    printf("Swaping all element in array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }



    return 0;
}
