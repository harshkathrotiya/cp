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
        int n ;
        cin>>n;
        vi v(n);
       bool allzero=true;

       for(int i=0;i<n;i++) 
       {
            int x;
            cin>>v[i];
            if(v[i]!=0) 
            {
                allzero=false;
            }
        }

        if(allzero)
        {
            cout<<0<<endl;
            continue;
        }
        bool is_cont=true;
        int lindex=-1;
       for (int i = 0; i < n; i++) 
       {
            if (v[i] != 0) {
                if (lindex != -1 &&i!=lindex+1) 
                {
                    is_cont = false;
                    break;
                }
                lindex = i;  
            }
        }
        if (is_cont) {
            cout << 1 << endl;  
        } else {
            cout << 2 << endl; 
        }
    }      
    return 0;
}
