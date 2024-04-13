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
    printf("Strings you entered are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    int del = 1; // Initialize deletion count
    for(int i=0;i<n;i++)
    {
        int temp = array[i];
        int count = 0;
        //counting duplicates
        for(int j=0;j<n;j++)
        {
            if(temp == array[j])
            {
                count++;
            }
        }
        printf("Element %d: count- %d \n",temp,count);
        
        //delete the duplicates in the array
        for(int k=0;k<n;k++)
        {
            if(array[k] == temp && count > 1)
            {
                // Shift elements to the left
                for(int l=k;l<n-1;l++)
                {
                    array[l] = array[l+1];
                }
                n--; // Decrease the size of the array
                k--; // Decrement k to check the same index again
                count--; // Decrement count as one duplicate is removed
                del--; // Decrement del as one deletion is done
                
                // If all required deletions are done for this element, break the loop
                if(del == 0)
                {
                    break;
                }
            }
        }
        del++; // Increment del for the next unique element
    }
    
    // Print the array after removing duplicates
    printf("Array after removing duplicates: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}
