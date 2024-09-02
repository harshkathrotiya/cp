#include <stdio.h>

int main() 
{
    int n;
    printf("how many elements do you want to insert in the array?\n");
    scanf("%d", &n);
    if (n==0) 
    {
        printf("array is empty. No elements to delete.\n");
        return 0;
    }
    
    int arr[n];
    printf("Please enter the elements:\n");
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n == 1) 
    {
        printf("deleted the only element.\n");
        printf("array is empty now.\n");
        return 0;
    }

    for (int i=1;i<n-1;i++) {
        arr[i-1]=arr[i];
    }
    n-=2;
    printf("deleted the first and last elements.\n");
    printf("array after deletion: \n");
    for(int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}