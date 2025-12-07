#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
  int t;
  cin >> t;
  
  for(ll n = 1; n <= t; n++) {
    long long count = (n*n * (n*n - 1)) / 2;
    long long attack = 4 * (n - 1) * (n - 2);
    long long result = count - attack;
    cout << result << endl;
  }

  return 0;
}