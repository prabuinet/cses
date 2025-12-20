#include <iostream>
#include <string>
#include <sstream>

typedef long long ll;

using namespace std;

int main()
{
  string s;
  cin >> s;
  std::ostringstream sb;

  int counts[26];
  for(int i = 0; i < 26; i++) counts[i] = 0;

  for(int i = 0; i < s.length(); i++) {
    counts[s[i] - 'A']++;
  }

  int max_indx = 0;
  int min_indx = 0;

  while(true) {
    max_indx = 0;
    min_indx = 0;
    for(int i = 1; i < 26; i++) {
      if(counts[i] > 0 && counts[i] >= counts[max_indx]) 
        max_indx = i;
    }

    for(int i = 1; i < 26; i++) {
      if(i == max_indx) continue;
      if(counts[i] > 0 && counts[i] >= counts[min_indx]) 
        min_indx = i;
    }
        

    cout << max_indx << ' ' << min_indx << ' ' << counts[max_indx] << ' ' << counts[min_indx] << endl;
    if(max_indx == 0 && min_indx == 0) {
      if(counts[max_indx] > 1) {
        // cout << sb.str() << endl;
        cout << -1 << endl;
      }
      else {
        cout << sb.str(); 
        if(counts[max_indx] == 1)
          cout << (char) ('A' + max_indx);
        if(counts[min_indx] == 1)
          cout << (char) ('A' + min_indx);
      }
      break;
    }

    while(counts[max_indx] > 0 && counts[min_indx] > 0) {
      sb << (char) ('A' + max_indx);
      counts[max_indx]--;
      sb << (char) ('A' + min_indx);
      counts[min_indx]--;
    }

    cout << sb.str() << endl;
  }


  return 0;
}