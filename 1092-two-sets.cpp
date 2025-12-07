#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
  ll n;
  cin >> n;
  
  ll sum = (n * (n + 1)) / 2;

  if(sum % 2 != 0) {
    cout << "NO" << endl;
    return 0;
  }

  sum = sum / 2;

  cout << "YES" << endl;

  // cout << sum << endl;

  ll t = 0;
  for(ll i = 1; i <= n; i++) {
    t = t + i;

    if(t == sum) {
      cout << i << endl;
      for(ll j = 1; j <= i; j++) {
        cout << j << ' ';
      }
      cout << endl;
      cout << n - i << endl;
      for(ll j = i + 1; j <= n; j++) {
       cout << j << ' ';
      }
      break;
    }

    if(t > sum) {
      ll more = t - sum;
      cout << i - 1 << endl;
      for(ll j = 1; j <= i; j++) {
        if(j != more)
          cout << j << ' ';
      }
      cout << endl;
      cout << n - i + 1 << endl;      
      cout << more << ' ';
      for(ll j = i + 1; j <= n; j++) {
       cout << j << ' '; 
      }
      break;
    }
  }


  
  return 0;
}