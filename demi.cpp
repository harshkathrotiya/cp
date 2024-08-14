 #include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    int sum1=0,sum2=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if((s1[i])<=91)
        {
            sum1+=(char(s1[i])-char('A')+1);
        }
        else
        {
            sum1+=(char(s1[i])-char('a')+1);
        }
        if(char(s2[i])<=91)
        {
            sum2+=(char(s2[i])-char('A')+1);
        }
        else
        {
            sum2+=(char(s2[i])-char('a')+1);
        }
    }
    if(sum1<sum2)   cout<<"-1"<<endl;
    else if(sum1>sum2)  cout<<"1";
    else cout<<"0";
}
