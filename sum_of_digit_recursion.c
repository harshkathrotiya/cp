// Online C compiler to run C program online
#include <stdio.h>
int sodigit(int);
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int ans=sodigit(n);
    printf("%d",ans);
    return 0;
}
int sodigit(int n)
{
    if(n==0)
    {
        return n;
    }
    else
    {   printf("%d",n);
        return n%10 + sodigit(n/10);
    }
}
