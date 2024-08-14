#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
       
        if(i==1){
        cout<<"one"<<endl;}
        if(i==2){
        cout<<"two"<<endl;}
        if(i==3){
        cout<<"three"<<endl;}
        if(i==4){
        cout<<"four"<<endl;}
        if(i==5){
        cout<<"five"<<endl;}
        if(i==6){
        cout<<"six"<<endl;}
        if(i==7){
        cout<<"seven"<<endl;}
        if(i==8){
        cout<<"eight"<<endl;}
        if(i==9){
        cout<<"nine"<<endl;}
        if(i>9)
        {
            if(i%2==0)
            cout<<"even"<<endl;
            else
             cout<<"odd"<<endl;    
        }
        
    }
    return 0;
}