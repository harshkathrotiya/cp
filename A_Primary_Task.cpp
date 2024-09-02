#include <iostream>
#include <vector>
using namespace std;

#define hk ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    hk
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a=((int)s[0])-48;
        int b=((int)s[1])-48;
        int c=((int)s[2])-48;
        int d=((int)s[3])-48;
        // cout<<a<<" "<<" " <<b<<" "<<c<< " "<<d<<" "<<endl;
        if(a==1 && b==0)
        {
            if(c>=1 && s.size()>3)
            cout<<"YES"<<endl;
            else if(c>1 && s.size()==3)
            {
                cout<<"YES"<<endl;
            }
            else 
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
