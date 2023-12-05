//C program to find second largest elements in a one dimensional array.
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

    
    int max1=arr[0];
    for(int i=0;i<size;i++)
    {
       if(max1<arr[i])
       {
        max1=arr[i];
       }

    }

    printf("\nFirst lagest number = %d",max1);
    
    int search_value=max1;
    int index_positon=-1;

    for(int i=0;i<size;i++)
    {
      if(search_value==arr[i])
      {
        index_positon=i;
      }

    }
     
    
    printf("\nIndex_position of first lagest number = %d",index_positon);


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

  
    int max2=arr[0];
    for(int i=0;i<size;i++)
    {
       if(max2<arr[i])
       {
        max2=arr[i];
       }

    }

    printf("\nSecond lagest number = %d",max2);

    return 0;
}




