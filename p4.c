#include <stdio.h>

int main()
{
    int n;
    printf("how many elements do you want to insert in the array?\n");
    scanf("%d",&n);
    int arr[n];
    printf("please enter the elements:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    int i;
    for (i=0;i<n;i++) 
    {
        int index=arr[i]%n;
        arr[index]+=n;
    }
    for (i=0;i<n;i++) 
    {
        if (arr[i]/n>1) 
        {
            printf("%d ",i);
        }
    }
    return 0;
}
