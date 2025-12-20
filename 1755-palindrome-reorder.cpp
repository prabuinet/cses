#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
  string str;
  cin >> str;

  int counts[26];
  int nr_odds = 0;

  bool is_odd = str.length() % 2 != 0;
  for(int i = 0; i < 26; i++)
    counts[i] = 0;

  for(auto s : str)
    counts[s - 'A']++;
  
  bool not_possible = false;

  for(int i = 0; i < 26; i++) {
    if(is_odd) {      
      if(counts[i] % 2 != 0) {
        nr_odds++;
        if(nr_odds > 1) {
          not_possible = true;
          break;
        }
      }
    } else {
      if(counts[i] % 2 != 0) {
        not_possible = true;
        break;
      }
    }
  }

  if(not_possible) {
    cout << "NO SOLUTION" << endl;
  }
  else {
    if(is_odd) {
      for(int i = 0; i < 26; i++) {
        if(counts[i] % 2 == 0) {
          for(int j = 0; j < counts[i] / 2; j++)
            cout << (char) ('A' + i);
        }
      }

      for(int i = 0; i < 26; i++) {
        if(counts[i] % 2 != 0) {
          for(int j = 0; j < counts[i]; j++)
            cout << (char) ('A' + i);
        }
      }

      for(int i = 25; i >= 0; i--) {
        if(counts[i] % 2 == 0) {
          for(int j = 0; j < counts[i] / 2; j++)
            cout << (char) ('A' + i);
        }
      }
    }
    else {

      for(int i = 0; i < 26; i++) {
        for(int j = 0; j < counts[i] / 2; j++)
          cout << (char) ('A' + i);
      }

      for(int i = 25; i >= 0; i--) {
        for(int j = 0; j < counts[i] / 2; j++)
          cout << (char) ('A' + i);
      }

    }
  }

  return 0;
}