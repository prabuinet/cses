#include <iostream>
#include <cstdint>
#include <vector>


using namespace std;

int main()
{
  int n;
  cin >> n;
  std::vector<bool> exist(n + 1, false);


  for(int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    exist[x] = true;
  }

  for(int i = 1; i < n + 1; i++) {
    if(!exist[i]) {
      cout << i;
      break;
    }
  }

  return 0;
}