#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

       int v[n];

        fo(i,n)
        {
            cin>>v[i];
        }
       if(v[0]==1)
       {
        cout<<"YES"<<endl;
       }
       else 
       cout<<"NO"<<endl;
       
    }
    return 0;
}