//C program to calculate median of an array.
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
    for(int i=0;i<size-1;i++)
    {
       for(int j=0;j<size-i-1;j++)
       {
        
        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;


        }

       }
    
    }


    

    printf("\nSorted array :\n ");
    for(int i=0;i<size;i++)
    {
    printf("%d ",arr[i]);
    }


    float median;
   
    float x;
    x=arr[((size-1)/2)]+arr[((size-1)/2)+1];

    if(size%2==0)
    {
        median=x/2;

    }

    else
    {
     
    median=arr[((size-1)+1)/2];

    }


    printf("\nMedian = %f",median);


    return 0;
}




