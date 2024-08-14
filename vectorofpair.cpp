#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;
void printvec(vector<pair<int,int> > s)
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i].first<<"  "<<s[i].second<<endl;
    }
    
}
int main()
{
    vector<pair<int,int> > v ;//v={{1,2},{2,3},{3,5}};
    
    printvec(v);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    printvec(v);
    return 0;
}