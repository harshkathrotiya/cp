#include <bits/stdc++.h>
#include<iostream>
#define el endl
#define ll long long



using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b,c;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a==b==c)
	    cout<<"YES"<<endl;
	    else if(a==(b-1)&& a==(c-2))
	    cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
	}
	return 0;
}
