#include <cmath>
#include <vector>
#include <iostream>
typedef long long ll;

using namespace std;

void print_k_bits(unsigned int n, int k) {
    for (int i = k - 1; i >= 0; --i)
        std::cout << ((n >> i) & 1);
}

vector<string> create(int n) {
    if (n == 1) {
        return {"0", "1"};
    }
    vector<string> code;
    auto prev = create(n - 1);
    for (auto s : prev) {
        code.push_back("0" + s);
    }
    reverse(prev.begin(), prev.end());
    for (auto s : prev) {
        code.push_back("1" + s);
    }
    return code;
}

int main() {
    int n;
    cin >> n;
    auto code = create(n);
    for (auto s : code) {
        cout << s << "\n";
    }
}

int main1()
{
  unsigned int n;
  cin >> n;

  unsigned int pn = pow(2, n);
  std::vector<unsigned int> arr;
  arr.push_back(0);
  arr.push_back(1);
  
  for(unsigned int i = 1; i < n; i++) {
    unsigned int pi = pow(2, i);
    // cout << "\n" << "pi:" << pi << "\n";
    unsigned int start = arr.size();
    for(unsigned int j = 1; j <= pi; j++) {
      arr.push_back(pi + arr[start - j]);
    }
  }

  for(auto a : arr) {
    print_k_bits(a, n);
    cout << '\n';
  }
  return 0;
}