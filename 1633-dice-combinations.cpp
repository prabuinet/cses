#include <iostream>
#include <cstdint>
#include <vector>

int main()
{
  int n;
  std::cin >> n;
  
  std::vector<long long> dp(n + 1);
  const int MOD = 1000000007;

  dp[0] = 1;

  for(int i = 1; i <= n; i++) {
    
    for(int dice = 1; dice <= 6; dice++) {
      if((i - dice) >= 0) {
        dp[i] = (dp[i] + (dp[i - dice])) % MOD;
      }
    }
  }

  std::cout << dp[n];
  return 0;
}