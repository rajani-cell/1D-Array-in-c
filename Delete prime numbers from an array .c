//Delete prime numbers from an array.
#include<stdio.h>

int isprime(int num)
{

if(num<=1)
{
  return 0;
}

for(int i=2;i*i<=num;i++)
{
  if(num%i==0)
  {
    return 0;
  }
}

return 1;

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


    int newsize=0;

    for(int i=0;i<size;i++)
    {
     if(!isprime(arr[i]))
     {

      arr[newsize++]=arr[i];

     }
    }


  printf("\nArray after deleting Prime numbers :");

  for(int i=0;i<newsize;i++)
  {
     printf("%d ",arr[i]);
  }


    return 0;
}




