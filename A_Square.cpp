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
    while (t--)
    {
        int a=4;
        int xmax=INT_MIN;
        int ymax=INT_MIN;
        int xmin=INT_MAX;
        int ymin=INT_MAX;
        while(a--)
        {
            int x,y;
            cin>>x>>y;
            if(x>xmax)xmax=x;
            if(x<xmin)xmin=x;
            if(y>ymax)ymax=y;
            if(y<ymin)ymin=y;
        }
        int area=(ymax-ymin)*(xmax-xmin);
        cout<<area<<endl;
    }
    return 0;
}