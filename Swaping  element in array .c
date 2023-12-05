//Swaping  element in array.
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
    temp=arr[0];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
    
    if(size>1)
    {
    temp=arr[1];
    arr[1]=arr[size-2];
    arr[size-2]=temp;
     
    }
    
    

    printf("Swaping lement in array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }



    return 0;
}
