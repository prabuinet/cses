#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
  int t;
  cin >> t;
  ll x, y;

  while(t--) {
    cin >> y >> x;

    ll mx = max(x, y);

    ll start = (mx - 1) * (mx - 1) + 1;
    ll end = mx * mx;

    if(x < y) {
      // move from left to right
      if(mx % 2 == 0) 
        cout << (end - x + 1) << endl;
      else
        cout << (start + x - 1) << endl;
    }
    else {
      // move from top to bottom
      if(mx % 2 == 0)
        cout << (start + y - 1) << endl;      
      else
        cout << (end - y + 1) << endl;
    }
    
  }

  return 0;
}