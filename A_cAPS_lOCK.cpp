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
bool is_upper(string s)
{
    for (int i =1; i < s.size(); i++)
    {
        if(islower(s[i]))
        return false;
        

    }
    return true;
}
int main()
{
    hk
   string s;
   cin>>s;
   if(is_upper(s))
   {
     if(isupper(s[0]))
    {
           transform(s.begin(), s.end(), s.begin(), ::tolower); 

        cout<<s;
    }
   else
    {
           transform(s.begin(), s.end(), s.begin(), ::tolower); 

        s[0]=toupper(s[0]);
        cout<<s;
   }
  
   }
 else
 cout<<s;
    return 0;
}