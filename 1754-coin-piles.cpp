#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
  ll t;
  cin >> t;

  while(t--) {

    ll a, b;
    cin >> a >> b;

    ll mx = max(a, b);
    ll mn = min(a, b);

    if((a + b) % 3 != 0 || mn < (mx / 2))
      cout << "NO";
    else
      cout << "YES";

    cout << endl;
  }

  return 0;
}