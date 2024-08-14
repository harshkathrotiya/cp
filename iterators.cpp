#include<iostream>
#include<vector>

using namespace std;

int  main()
{
    //simple vector
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    // vector<int>::iterator it=v.begin();
    // cout<<*(it+1);
    

    //vector of pair
    vector<pair<int,int> > vp;
    vp.push_back(make_pair(1,2));
    vp.push_back(make_pair(3,7));
    vp.push_back(make_pair(5,14));
    // vector<pair<int,int> > ::iterator it;
    for(auto it x=vp.begin();it!=vp.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<" " ;
        cout<<it->first<<" "<<it->second<<endl;
    }
    //second way to access vector of pair

    // for(pair<int,int> value : vp)
    // {
    //     cout<<value.first<<" "<<value.second<<endl;
    // }


    //second way to access vector elements
    // for(int &value : v )        //using reference
    // {
    //     cout<<value++<<endl;
    // }   
    // for(int value : v)           //using simple way it send copy of element of vector
    // {
    //     cout<<value<<endl;
    // }


    //auto keyword in stl
    


    return 0;
}