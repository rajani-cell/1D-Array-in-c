//C program to find the first repeated element in an array.
#include<stdio.h>

int find_repeted_array(int arr[100],int size)
{
   for(int i=0;i<size;i++)
   {
     for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
           return arr[i] ;
        }
    }
   }

   return -1; 

}


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

    int result=find_repeted_array(arr,size);

    if(result !=-1)
    {
        printf("First repeated element in array = %d\n",result);
    }

    else
    {
        printf("No repeated element.");    
    }

    return 0;
    
}




