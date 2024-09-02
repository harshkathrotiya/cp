#include<stdio.h>

int main(){
    int n;
    printf("How many elements do you want to insert in the array?\n");
    scanf("%d", &n);
    int arr[n];
    printf("Please enter the elements:\n");
    for (int i=0; i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("largest elemlent is %d and second largest elemlentis %d\n",arr[n-1],arr[n-2]);
    

    return 0;
}