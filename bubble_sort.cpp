#include<iostream>

using namespace std;

int main()
{
    int arr[]={2,6,4,3,8,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        int flg=0;
        for (int j= 0; j< n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flg=1;
            }
        }
        if(flg==0)
        break;
        
    }
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
    
}


    return 0;
}