// Priyank S Patel

// https://projecteuler.net/problem=11

#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> q, result;

auto GenerateSequence(const int n) -> void {
  q.resize(n + 1);
  for (int i = 1; i <= n; ++i) {
    q[i] = (i * (i + 1)) / 2;
  }
}

auto Factor(int n) -> int {
  map<int, int> h;
  int last, divisor = 2;
  while (divisor <= n) {
    if (n % divisor == 0) {
      while (n % divisor == 0) {
        h[divisor] += 1;
        n /= divisor;
      }
    } else {
      divisor += 1;
      last = divisor;
    }
  }
  if (n > last) {
    h[n] = 1;
  }
  int product = 1;
  for (const auto &[z, x] : h) {
    product *= (x + 1);
  }
  return product;
}

auto Pre(const int n) -> void {
  GenerateSequence(n);
  result.reserve(n);
  for (const auto &x : q) {
    result.push_back(Factor(x));
  }
  result[0] = 0;
  result[1] = 1;
}

auto Solve() -> void {
  int n;
  cin >> n;
  for (int i = 0; i < (int)result.size(); ++i) {
    if (result[i] > n) {
      cout << q[i] << '\n';
      break;
    }
  }
}

auto main() -> int {
  int t;
  cin >> t;
  Pre(45000);
  while (t--) Solve();
  return 0;
}
