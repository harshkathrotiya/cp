#include <iostream>
#include <vector>
#include <bits/stdc++.h>
int is_prime[1000001];
void sieve()
{
    int maxN=50;
    for (int  i = 1; i <maxN; i++) is_prime[i]=1;
    is_prime[0]=is_prime[1]=0;
    for (int  i = 2; i*i<= maxN; i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
    

}
using namespace std;
int main()
{

    for(int i:is_prime)
    {
        cout<<i<<endl;
    }
    return 0;
}