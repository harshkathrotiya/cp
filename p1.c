#include <stdio.h>

int main() {
    int arr[5]; 
    int n=0; 
    if (n==0) 
    {
        int value;
        printf("enter the value to insert at the first position: ");
        scanf("%d",&value);
        arr[0]=value;
        n=1;
        printf("array after insertion: ");
        for (int i=0; i<n;i++) {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    if (n < 5) {
        printf("enter %d more elements:\n", 5-n);
        for (int i=n;i<5; i++) 
        {
            scanf("%d",&arr[i]);
        }
        n=5;
    }

    printf("array before insertion: ");
    for (int i=0; i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int value;
    printf("enter the value to insert:");
    scanf("%d", &value);

    int choice;
    printf("where do you want to insert the value? (1) First, (2)Last:");
    scanf("%d",&choice);

    if (choice==1) {
        for(int i n;i>0;i--) {
            arr[i]=arr[i-1];
        }
        arr[0]=value;
        n++;
    } else if(choice==2) {
        arr[n]=value;
        n++;
    } else {
        printf("invalid choice.\n");
    }

    printf("array after insertion:");
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}