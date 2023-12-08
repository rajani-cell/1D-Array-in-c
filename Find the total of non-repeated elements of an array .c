//C program to find the total of non-repeated elements of an array.
#include<stdio.h>
int main()
{
   int size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }


    int count =0;

    for(int i=0;i<size;i++)
    {
        int isRepeated = 0;
        for(int j=0;j<size;j++)
        {
            if(i!=j && arr[i] ==arr[j])
            {
             isRepeated = 1;
             break;
            }
        }

       if(! isRepeated)
       { 
        count++;
       } 
       
    }
   
      printf("\nTotal of non-repeated elements = %d", count);

    return 0;
    
}










