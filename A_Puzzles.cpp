#include <iostream>
#include <vector>
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        //write code here
        int n,m;
        cin>>n>>m;
        int arr[m];
        for (int  i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        int ls=arr[n-1]-arr[0];
        for (int  i = 1; i <= m-n; i++)
        {
            if(arr[i+n-1]-arr[i]<ls)
            {
                ls=arr[i+n-1]-arr[i];
            }
        }
        cout<<ls;
        
    
    return 0;
}