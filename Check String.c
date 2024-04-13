#include <stdio.h>
#include <string.h>
#define MAX 50

int getstrlength(char *str1)
{
    int l;
    l= strlen(str1);
    return l;
}  
int main()
{
    int n,i;
    
    printf("Enter number of strings to be entered: \n");
    scanf("%d",&n);
    char string[n][MAX];
    printf("Enter strings: \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
    }
    printf("Strings you entered are: \n");
    for(i=0;i<n;i++)
    {
        printf("%s ",string[i]);
    }
    printf("\n");
//Checking Count
for(i=0;i<n;i++)
    {
        int l=getstrlength(string[i]);
        for(int k=0;k<l;k++)
        {
            char a=string[i][k];
            int count=0;
            int rate[MAX] = {0}; // Initialize to zero
            for(int c=0;c<l;c++)
            {
             
             if(a==string[i][c])
             {
                 count=count+1;
             }
             
            rate[c]=count; 
            }
            int p=0; // Initialize to zero
            for(int c=0;c<l;c++)
                {   
                if(rate[c]>2)
                 {
                   p=p+1; 
                 }
                 if(p>=2)
                 {
                     printf("%s \n",string[i]); // Print the string
                     break; // No need to check the rest of the string
                 }
                }
            if(p>=2)
            {
                break; // No need to check the rest of the string
            }
        }
    }
return 0; 
}
