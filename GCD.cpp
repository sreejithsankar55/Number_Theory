#include < bits / stdc++.h >
using namespace std;

int gcd(int a, int b) {
  if (a > b)
    swap(a, b);
  if (a == 0)
    return b;
  else
    return gcd(b % a, a);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b);
  return 0;
}
