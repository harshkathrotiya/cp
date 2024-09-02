//reverse array
#include<stdio.h>

int main(){
    int n;
    printf("how many elements do you want to insert in the array?\n");
    scanf("%d",&n);
    int arr[n];
    printf("please enter the elements:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int reversed[n];
    for (int i=0;i<n;i++)
    {
        reversed[i]=arr[n-i-1];
    }
    printf("reversed array is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ", reversed[i]);
    }
    
}