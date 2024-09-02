#include<bits/stdc++.h>
#include <iostream>
#include <algorithm> // for std::min
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1) // Corrected Fo macro
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

int main() {
    hk
    ll eye, mouth, body, res = 0;
    cin >> eye >> mouth >> body;

    // Find the minimum of the three
    ll mn = min({eye, mouth, body});
    res += mn;
    eye -= mn;
    mouth -= mn;
    body -= mn;

    // Find the minimum of eye/2 and body
    mn = min(eye / 2, body);
    res += mn;

    cout << res;
    return 0;
}
