#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
  ll n;
  cin >> n;

  const ll MOD = 1000000007;
  
  ll result = 2;
  for(ll i = 2; i <= n; i++) {
    result = result * 2 % MOD;
  }

  cout << result << endl;

  return 0;
}