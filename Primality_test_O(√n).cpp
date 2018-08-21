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
	if(n<=3)
		return true;
	if((n%2==0)||(n%3==0))
		return false;
		
	for ( ll i = 5 ; i*i <= n ; i+=6 )
		if(n%i==0||(n%(i+2))==0) // n%i+2 for i like 5+2,in between even nos i and i+2
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
