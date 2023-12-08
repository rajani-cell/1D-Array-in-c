//C program to split an array and add the first half after the second half of the array.
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

    int index_position;
    printf("Enter the index position of the item to split the array :");
     scanf("%d",&index_position);

    int resultarr[100];
   
    for(int i=0;i<size-index_position;i++)
    {
     
     resultarr[i]=arr[index_position+i];
     
    }

    int i,j;
    for(j=0,i=size-index_position;i<size;j++,i++)
    {
      resultarr[i] =arr[j] ;
    }

    printf("\n New result :"); 
    for(int i=0;i<size;i++)
    {
     printf("%d ",resultarr[i]);
    }


    return 0;
    
}










