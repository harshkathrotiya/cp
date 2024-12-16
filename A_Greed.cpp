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
    int t;
    cin >> t;
    if(t==2)
   {
    cout<<"YES";
    return 0;
   }
  ll arr[t];
  ll at[t];
  ll vol=0,cap=0,sum=0;
  for(ll i=0;i<t;i++)
  {
    cin>>arr[i];
    vol+=arr[i];
  }
  for(ll i=0;i<t;i++)
  {
    cin>>at[i];
   
  }
  sort(at, at +t);o
  int s=at[t-1]+at[t-2];

    if(s>=vol)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";


    return 0;
}