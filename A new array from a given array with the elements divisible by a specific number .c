//C program to create a new array from a given array with the elements divisible by a specific number.
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

    
    int number;
    printf("Enter divisible number :");
    scanf("%d",&number);

    
    
    int newsize=0;
  
    for(int i=0;i<size;i++)
    {
   
    if(arr[i]%number==0)
    {

      arr[newsize++]=arr[i];
      
    }
    }

    printf("\nNew array :");
    for(int i=0;i<newsize;i++)
    {
     printf("%d ",arr[i]);
    }

  


    return 0;
}




