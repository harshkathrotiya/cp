#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[10]={1,2,4,2,1,3,5,7,6,4};
    map<int ,int > mp;
    int maxe,mine,maxf,minf;
    for (int i = 0; i < 10; i++)    
    {
        if(mp.find(arr[i])==mp.end())
        {
            mp[arr[i]]=1;
        }
        else{
            mp[arr[i]]++;
        }
        if(maxf<mp[arr[i]])
        {
            maxf=mp[arr[i]];
            maxe=arr[i];
        }
        if(mp[arr[i]]<minf)
        {
            minf=mp[arr[i]];
            mine=arr[i];
        }
    }
    

cout<<" max frequency is "<<maxf <<" ele ment is "<<maxe<<endl;
cout<<"min frequency is "<<minf<<" element is "<<mine;

    return 0;
}