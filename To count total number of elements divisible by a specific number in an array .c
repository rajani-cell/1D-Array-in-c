//C program to count total number of elements divisible by a specific number in an array.
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

    
    int count=0;
    

    for(int i=0;i<size;i++)
    {
   
    if(arr[i]%number==0)
    {
      count++;
    }


    }

  
  printf("\nTotal number of elements divisible %d = %d",number,count);

    return 0;
}




