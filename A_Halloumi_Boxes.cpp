#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr, v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        v = arr;
       sort(v.begin(),v.end());
        if(k==1 && v!=arr )
        {
            cout<<"NO"<<endl;
        }
        else 
        cout<<"YES"<<endl;
    }

    return 0;
}