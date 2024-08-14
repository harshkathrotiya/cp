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



s
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int first(int a,int b,int c,int d)
{
    int su=0,sa=0;
    if(a>c)
    su++;
    else if(a<c)
    sa++;
    if(b>d)
    su++;
    else if(b<d)
    sa++;
    if(su>sa)
    return 1;
    else 
    return 0;
}
int second(int a,int b,int c,int d)
{
    int su=0,sa=0;
    if(a>d)
    su++;
    else if(a<d)
    sa++;
    if(b>c)
    su++;
    else if(b<c)
    sa++;
    if(su>sa)
    return 1;
    else 
    return 0;
}
int third(int a,int b,int c,int d)
{
    int su=0,sa=0;
    if(b>d)
    su++;
    else if(b<d)
    sa++;
    if(a>c)
    su++;
    else if(a<c)
    sa++;
    if(su>sa)
    return 1;
    else 
    return 0;
}
int fourth(int a,int b,int c,int d)
{
    int su=0,sa=0;
    if(b>c)
    su++;
    else if(b<c)
    sa++;
    if(a>d)
    su++;
    else if(a<d)
    sa++;
    if(su>sa)
    return 1;
    else 
    return 0;
}
int main()
{
    hk
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d,su=0,sa=0;
        cin>>a>>b>>c>>d;
       if(first(a,b,c,d))
       su++;
       if(second(a,b,c,d))
       su++;
       if(third(a,b,c,d))
       su++;
       if(fourth(a,b,c,d))
       su++;
       cout<<su<<endl;
    // cout<<second(a,b,c,d)<<endl;
    }
    return 0;
}