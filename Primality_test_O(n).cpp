//Sreejith
//21/09/2018
//Geeksforgeeks

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb  push_back
#define mp  make_pair
#define ff  first
#define ss  second
using namespace std ;
bool isPrime(ll n)
{
	if(n<=1)
		return false;
	for ( ll i = 2 ; i < n ; i++ )
		if(n%i==0)
			return false;
	return true;
}		
int main()
{
	ll n;
	cin>>n;
	isPrime(n)?cout<<"True": cout<<"False";
	
    return 0;
}
