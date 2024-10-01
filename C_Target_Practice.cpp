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
        int cnt=0;
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j=0;j < 10; j++)
            {
                cin>>arr[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if((i==0|| j==0|| i==9||j==9)&& arr[i][j]=='X')
                {
                    cnt++;
                }
               else if((i==1|| j==1|| i==8||j==8)&& arr[i][j]=='X')
                {
                    cnt+=2;
                }
                else if((i==2|| j==2|| i==7||j==7) && arr[i][j]=='X')
                {
                    cnt+=3;
                }
                else if((i==3|| j==3|| i==6||j==6)&& arr[i][j]=='X')
                {
                    cnt+=4;
                }
                else if((i==4|| j==4|| i==5||j==5)&& arr[i][j]=='X')
                {
                    cnt+=5;
                }
               
            }
            
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}