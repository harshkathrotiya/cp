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
    string a, b;
    cin >> a >> b;

    // Ensure both strings are converted to uppercase
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c) { return std::toupper(c); });
    transform(b.begin(), b.end(), b.begin(), [](unsigned char c) { return std::toupper(c); });

    if(a<b)
    cout<<-1;
    else if (a>b)
    cout<<1;
    else 
    cout<<0;

    return 0;
}
