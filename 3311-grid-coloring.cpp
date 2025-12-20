#include <iostream>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  char arr[500][500];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {

      
      std::set<char> s{'A', 'B', 'C', 'D'};

      s.erase(arr[i][j]);

      // left
      if(j != 0) {
        s.erase(arr[i][j - 1]);
      }

      // // right
      // if(j != m) {
      //   s.erase(arr[i][j + 1]);
      // }

      // top
      if(i != 0) {
        s.erase(arr[i - 1][j]);
      }

      // // bottom
      // if(i != n) {
      //   s.erase(arr[i + 1][j]);
      // }

      char c = *s.begin();
      arr[i][j] = c;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }

  return 0;
}