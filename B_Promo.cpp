#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (long long i = 0; i < n; i++)
#define Fo(i, k, n) for (long long i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
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
    ll n,q;
    cin>>n>>q;
    vl v(n);
    fo(i,n) cin>>v[i];
    sort(v.rbegin(),v.rend());
    vl prefix(n+1);
    prefix[0]=v[0];
    fo(i,n) prefix[i]=prefix[i-1]+v[i];
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<prefix[x-1]-prefix[x-y-1]<<endl;
    }
    return 0;
}
