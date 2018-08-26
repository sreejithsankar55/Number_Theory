#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
using namespace std;
vector<ll> prime(ll n)
{
    vector < ll > v;
    ll b;
    while(n%2==0)
    {
        v.pb(b);
        n/=2;
    }

    for(ll i = 3 ; i <= sqrt(n) ; i+=2 )
    {
        while(n%i==0)
        {
            v.pb(i);
            n/=i;
        }
    }

    if(n>2)
        v.pb(n);

    return v;
}
int main()
{
    ll n,si;
    cin>>n;
    vector < ll > v=prime(n);
    si=v.size();
    for ( ll i = 0 ; i < si ; i++ )
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
