//C program to calculate the sum of array elements using pointers as an argument.
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

    int *ptr=arr;
    int sum=0;

    for(int i=0;i<size;i++)
    {
     sum=sum+*ptr;
     *ptr++;

    }

    printf("\nSum of array elements using pointers = %d",sum);



    return 0;
    
}




