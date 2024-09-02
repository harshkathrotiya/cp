#include <iostream>
#include <vector>
#define ll long long
using namespace std;

#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    hk
    int n;
    cin >> n;
    vector<ll> v(n);

    for (ll i=0;i<n;i++) 
    {
        cin>>v[i];
    }
    int ml=1; 
    int cl=1;
    for (ll i=1; i<n;i++)
    {
        if(v[i]>v[i-1])
        {
            cl++;
        }
        else
        {
            if(cl>ml)
            {
                ml=cl;
            }
            cl = 1;  
        }
    }

     if (cl>ml) {
        ml=cl;
    }

    cout<<ml;
    return 0;
}
