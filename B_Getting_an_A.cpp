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
int main() {
    int n;
    cin>>n;
    vi v(n);
    for (int i=0;i<n;i++) 
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double csum=0;
    for (int i:v) 
    {
        csum+=i;
    }
    double cavg=csum/n;
    if (cavg>=4.5)
    {
        cout<<0<<endl; 
        return 0;
    }
    int redos=0;
    for(int i=0;i<n;i++) 
    {
        csum=csum-v[i]+5;
        double newavg=csum/n;
        
        ++redos;
        
        if (newavg>=4.5) 
        {
            cout<<redos<<endl;
            
            return 0;
        }
    }
    cout<<redos<<endl;

    return 0;
}