#include <iostream>
#include <vector>
#include <cctype>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    vector<char> ch;
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    set<char> seen;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(vowels.find(s[i]) == vowels.end())
        {
            if(seen.find(tolower(s[i])) == seen.end())
            {
                ch.push_back('.');
                if(isupper(s[i]))
                {
                    ch.push_back(tolower(s[i]));
                }
                else
                {
                    ch.push_back(s[i]);
                }
                seen.insert(tolower(s[i]));
            }
        }
    }
    
    for (char c : ch)
    {
        cout << c;
    }
    
    return 0;
}