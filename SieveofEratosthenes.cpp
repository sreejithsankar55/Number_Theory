//Geeks for geeks
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
vector<ll> SieveOfEratosthenes(ll n)
{
    vector < ll > v;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (ll i=2; i<=n; i++)
        if (prime[i])
            v.pb(i);
    return v;
}

int main()
{
    ll n;
    cin>>n;
    vector < ll > v;
    v=SieveOfEratosthenes(n);
    cout<<"Prime numebrs smaller than or equal to n"<<endl;
    for(ll i = 0 ; i < v.size() ; i++ )
        cout<<v[i]<<" ";

    return 0;
}
