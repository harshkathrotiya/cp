#include<iostream>
#include<vector>
#include<map>

using  namespace std;

int main()
{
    map<string,int> m;
    m["abc"]=1;
    m["abc"]++;
   for(auto pr:m)
   {
    cout<<pr.first<<" "<<pr.second;
   }

    return 0;
}