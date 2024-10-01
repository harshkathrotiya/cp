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
    int t,count=0;
    cin >> t;
    while ((t--))
     {
        int m,n;
        cin>>m>>n;
        string s,s1;
        cin>>s>>s1;
        if(issub(s,s1) || s==s1)
        {
            cout<<0<<endl;
            continue;
        }
        
       for (int i = 0; i <6; i++)
       {
        s+=s;
        count++;
        if(issub(s,s1))
        {
            break;
        }
       }
        if(count==6)
        cout<<-1<<endl;
        else
        cout<<count<<endl;
        count=0;
    }

    return 0;
}