#include <iostream>

typedef long long ll;

using namespace std;


int main()
{
  int n;
  cin >> n;
  
  int answer = 0;

  int div = 5;
  while(n / div != 0) {
    answer += n / div;
    div *= 5;
  }

  cout << answer << endl;

  return 0;
}