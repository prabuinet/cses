#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
  string s;
  cin >> s;
  
  int cur_max = 0;
  int cur_cnt = 0;
  int cur = ' ';

  for(auto ch : s) {
    if(cur != ch) {
      cur_max = max(cur_max, cur_cnt);
      cur_cnt = 0;
    }
    cur_cnt++;
    cur = ch;
  }

  cout << max(cur_cnt, cur_max);

  return 0;
}
