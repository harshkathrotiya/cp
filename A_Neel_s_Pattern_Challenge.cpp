#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define clr(x) memset(x,false,sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
#define hk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef pair<int,int> pii;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{
    hk
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
          string s;
        cin>>s;
         int count=0;
       for(int i=0;i<n-2;i++)
        {
    if(s[i]=='1')
    {
        for(int j=i+2;j<n;j++)
        {
            if(s[j]=='1'){
                bool iv=true;
                for(int k=i+1;k<j-1;k++)
                {
                    if(s[k]==s[k+1])
                    {
                        iv=false;
                        break;
                    }
                }
                if(iv) count++;
            }
        }
    }
}
        cout<<count<<endl;
    }
    return 0;
}

