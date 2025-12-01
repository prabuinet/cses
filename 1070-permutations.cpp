#include <iostream>
typedef long long ll;

using namespace std;

int main1()
{
  int n;
  cin >> n;
  if(n == 1)
    cout << 1;
  else if(n == 2 || n == 3)
    cout << "NO SOLUTION";
  else {
    int l = n / 2;
    int r = n;
    if(n % 2 != 0) l++;
    int lstart = l;
    while(l > 0) {
      cout << l << " ";
      if(r > lstart)
        cout << r << " ";
      l--;
      r--;
    }    
  }  

  return 0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    // print evens
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    // print odds
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}