#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    hk
    int n,m;
    cin>>n>>m;
    vi vn(n),vm(m),vt;
    // fo(i,n)cin>>vn[i];
    for (int i=0;i<n;i++)
    {
        cin>>vn[i];
    }
    for (int i=0;i<m;i++)
    {
        cin>>vm[i];
    }
    fo(i,m)cin>>vm[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(vn[i]==vm[j])
            {
                vt.push_back(vn[i]);
            }
        }
    }
    
    for(int i=0;i<vt.size();i++)
    {
        cout<<vt[i]<<" ";
    }
    
    
    return 0;
}