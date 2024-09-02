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
    int a=0,b=0,c=0,d=0,ct=0,l;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==1)
        a++;
        else if(n==2)
        b++;
        else if(n==3)
        c++;
        else 
        d++;
    }
    ct+=d;
    if(c<a)
    {
        ct+=c;
        a-=c;
        c=0;
    }
    else if(a<=c)
    {
        ct+=a;
        c-=a;
        a=0;
    }
    if(c>0)
    {
        ct+=c;
        c=0;
    }
    if(b>0)
    {
        ct+=b/2;
        b=b%2;
    }
    l=a+(b*2);
    if(l<=4 && l>0)
    {
        ct+=1;
    }
    else if(l%4!=0)
    {
        ct+=(l/4)+1;
    }
    else
    ct+=l/4;
    cout<<ct<<endl;;
    return 0;
}