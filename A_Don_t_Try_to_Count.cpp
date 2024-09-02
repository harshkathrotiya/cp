#include <iostream>
#include <string>
using namespace std;

#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool issub(const std::string& s, const std::string& s1)
{
    return s.find(s1) != std::string::npos;
}
int main() {
    hk
    int t;
    cin >> t;
    while (t--) {
        int n,a,count=0;
        cin>>n>>a;
        string s ,s1;
        cin>>s>>s1;
       
        while(true)
        {
            count++;
            s+=s;
            if(issub(s,s1) || count>25)
            break;
        }
        if(count>25)
        cout<<-1;
        else
        cout<<count;
    
    }

    return 0;
}