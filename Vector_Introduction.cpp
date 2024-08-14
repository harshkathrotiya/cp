#include <bits/stdc++.h>
#include<vector>
#include<iostream>
#define el endl
#define ll long long
using namespace std;

int main() {
	// your code goes here

int t;
cin>>t;

while(t--)
{
    int n ;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(n%2==1&&n%3==0)
    {
        cout<<v[(n/2)]<<endl;
    }
    else if(n%2==0&&n%3==0)
    {
        cout<<v[0]<<" "<<v[n-1]<<endl;
    }
    else
    {
        cout<<v[0]+v[n-1]<<endl;
    }
    
    
}




return 0;

}