#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

int main() {
    hk
    string s;
    cin >> s;
    vector<char> v;
    
    for (int i = 0; i < s.size(); i++) {   
        if (s[i] == 'h' && i + 1 < s.size() && s[i + 1] == 'e') {
            v.pb(s[i]);
        }
        if (s[i] == 'e' && i + 1 < s.size() && s[i + 1] == 'l') {
            v.pb(s[i]);
        }
        if (s[i] == 'l' && i + 1 < s.size() && s[i + 1] == 'l') {
            v.pb(s[i]);
            v.pb(s[i + 1]);
        }
        if (s[i] == 'l' && i + 1 < s.size() && s[i + 1] =='o' ) {
            v.pb(s[i]);
            v.pb(s[i + 1]);
        }
    }

    auto it 
        = unique(v.begin(), v.end()); 
  
    // Use erase method  to remove all the duplicates 
    // from the vector 
    v.erase(it, v.end()); 
    for(int i=0;i<v.size();i++)
    cout<<v[i];

    return 0;
}