//Sreejith
//21/08/2018
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb  push_back
#define mp  make_pair
#define ff  first
#define ss  second
using namespace std ;
int main()
{
	ll n;
	cin>>n;
	vector < ll > v;
	for ( ll i = 1 ; i <= sqrt(n)  ; i++ )
	{
		if(n%i==0)
		{
			if(i==(n/i))
				v.pb(i);
			else
			{
				v.pb(i);
				v.pb(n/i);
			}
		}	
	}
	for ( ll i = 0 ; i < v.size() ; i++ )
		cout<<v[i]<<" ";
    return 0;
}
