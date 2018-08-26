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
bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s*s == x);
}
bool isFibonacci(int n)
{
	
	return isPerfectSquare(5*n*n + 4) ||
		isPerfectSquare(5*n*n - 4);
}

int main()
{
for (int i = 0; i <= 10; i++)
	isFibonacci(i)? cout << i << " is a Fibonacci Number \n":
					cout << i << " is not a Fibonacci Number \n" ;
	return 0;
}
