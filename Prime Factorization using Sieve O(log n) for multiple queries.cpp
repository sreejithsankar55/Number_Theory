/* (: Sreejith Codes :) */
//geeks for geeks
#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793
#define 	maxn 100000

using namespace std;
vector < ll > spf(maxn);

void sieve()
{
    spf[1]=1;
    for(ll i = 2 ; i < maxn ; i++)
        spf[i]=i;
    for(ll i = 4 ; i < maxn ; i+=2)
        spf[i]=2;
    for(ll i = 3; i*i<maxn ; i++)
    {
        if(spf[i]==i)
        {
            for(ll j=i*i; j < maxn ; j+=i)
                if(spf[j]==j)
                    spf[j] = i;
        }
    }
}
vector < ll > getFactors(ll x)
{
    vector < ll > res;
    while(x!=1)
    {
        res.pb(spf[x]);
        x/=spf[x];
    }
    return res;
}
int main()
{
    sieve();
    ll x;
    cout<<"Enter a number to find prime factorisation"<<endl;
    cin>>x;
    cout<<"Prime factorization for x is : "<<endl;

    vector < ll > v = getFactors(x);
    for(ll i = 0 ; i < v.size() ; i++ )
        cout<<v[i]<< " ";
    cout<<endl;

    return 0;

}
//Only upto 10^7 else memory issues
