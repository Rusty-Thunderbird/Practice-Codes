#include <stdio.h>
#define MAX 50

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int array[MAX];
    //Elements of array
    printf("Enter Elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    //store 1st element into temp;
    int temp;
    for(int i=0;i<n;i++)
    {
       temp=array[i];
       int count=0;
       //counting duplicates
       for(int j=0;j<n;j++)
       {
           if(temp==array[j])
           {
               count=count+1;
           }
       }
       printf("%d: %d \n",temp,count);
       
       //delete the duplicates in the array
       for(int k=0;k<n;k++)
       {
           if(array[k]==temp && k!=i)
           {
               // Shift elements to the left
               for(int l=k;l<n-1;l++)
               {
                   array[l]=array[l+1];
               }
               n--; // Decrease the size of the array
               k--; // Decrement k to check the same index again
           }
       }
       
    }
    for(int i=0;i<n;i++)
       {
           printf("%d ",array[i]);
       }
    return 0;
}
