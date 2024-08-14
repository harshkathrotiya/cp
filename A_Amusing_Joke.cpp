#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
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
    string a,b,c;
    cin>>a>>b>>c;
    multiset<char> s(a.begin(),a.end()),s1(c.begin(),c.end());
    s.insert(b.begin(),b.end());
    // for (auto i: s)
    // {
    //     cout<<i;
    // }
    // cout<<endl;
    // for(auto i:s1)
    // {
    //     cout<<i;
    // }
    // cout<<endl;
    // cout<<(s1==s);
    // cout<<s1.compare(s);
    // cout<<sizeof(s)<<" "<<sizeof(s1);
    if(s1==s)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}