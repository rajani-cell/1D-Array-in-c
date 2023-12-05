//C program to find second smallest element in a one dimensional array.
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

    
    int min1=arr[0];
    for(int i=0;i<size;i++)
    {
       if(min1>arr[i])
       {
        min1=arr[i];
       }

    }

    printf("\nFirst smallest number = %d",min1);
    
    int search_value=min1;
    int index_positon=-1;

    for(int i=0;i<size;i++)
    {
      if(search_value==arr[i])
      {
        index_positon=i;
      }

    }
     
    
    printf("\nIndex_position of first smallest number = %d",index_positon);


    for(int i=index_positon;i<size;i++)
    {
      arr[i]=arr[i+1];
    }

    size--;
    
    printf("\nAfter deletion new array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }     

  
    int min2=arr[0];
    for(int i=0;i<size;i++)
    {
       if(min2>arr[i])
       {
        min2=arr[i];
       }

    }

    printf("\nSecond smallest number = %d",min2);

    return 0;
}




