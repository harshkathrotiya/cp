#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        intio x,y;
        cin>>x>>y;
        if(y>x+1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(y%9 == (1+x)%9)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}