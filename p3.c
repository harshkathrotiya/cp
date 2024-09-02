#include <stdio.h>

int main() {
    int n;
    printf("how many elements do you want to insert in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Please enter the elements:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n-1;i++) 
    {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]<arr[j+1])
             {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Which element do you want to find in the array?\n");
    printf("1)max\n");
    printf("2)min\n");
    int a;
    scanf("%d",&a);

    if (a== 1)
        printf("max element is %d\n",arr[0]);
    else if (a==2)
        printf("min element is %d\n",arr[n-1]);
    else
        printf("enter a valid input");

    return 0;
}