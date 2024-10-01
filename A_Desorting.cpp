#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (ll i = 0; i < n; i++)
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
typedef pair<ll, ll> pii;
typedef pair<ll, ll> pl;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    hk
    ll t;
    cin >> t;
    while (t--)
    {
        ll n ;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        if(is_sorted(arr,arr+n))
        {       
            int min=arr[1]-arr[0];
            for (ll i = 0; i < n-1; i++)
            {
                ll dif=arr[i+1]-arr[i];
                if(dif<min)
                min=dif;
            }
                cout<<min/2+1<<endl;   
        }
        else
        cout<<0<<endl;
        
    }
    return 0;
}