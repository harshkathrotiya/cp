
#include <stdio.h>
int pow(int,int);
int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    int ans=pow(a,n+1);
    printf("%d",ans);
    return 0;
}
int pow(int a,int n)
{
  
    if(n==1)
    {
        return n;
    }
    else
    {   
        return a*pow(a,n-1);
    }
}
