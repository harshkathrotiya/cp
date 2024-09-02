#include <iostream>
#include <vector>
#include <cctype>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<char> v;
    char x;
    while (cin >> x) {
        x=(char)tolower(x);
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y')
        continue;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++) {
        cout<<".";
        cout << v[i];
    }

    return 0;
}