#include <iostream>
#include <vector>
#include <cmath>

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

vi primes;
bool arr[100];

void sieve()
{
    int max = 100;
    clr(arr);
    arr[0] = arr[1] = true;
    for (int i = 2; i * i < max; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < max; j += i)
            {
                arr[j] = true;
            }
        }
    }

    for (int i = 2; i < max; i++)
    {
        if (!arr[i])
            primes.pb(i);
    }
}

int main()w
{
    hk

    sieve();

    cout << "Prime numbers: ";
    for (int i : primes)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "arr array: ";
    for (int i = 2; i < 100; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}