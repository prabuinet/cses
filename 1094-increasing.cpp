#include <iostream>
#include <cstdint>
#include <vector>


using namespace std;

int main()
{
  int n;
  cin >> n;
  
  long long pt = 0;
  cin >> pt;
  long long res = 0;

  for(int i = 0; i < n - 1; i++)
  {
    long long t;
    cin >> t;
    
    long long x = pt > t ? (pt - t) : 0;
    res += x;
    pt = t + x;
  }
  
  cout << res;

  return 0;
}


