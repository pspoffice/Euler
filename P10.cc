// https://projecteuler.net/problem=10

#include <cmath>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

vector<long long> v;

// Pre Calculation

auto Calculate() -> void {
  const int x = 2000000;
  deque<bool> d;
  d.resize(x + 1, 1);
  d[0] = d[1] = 0;
  for (int i = 2; i <= (int)sqrt(x); ++i) {
    if (d[i]) {
      for (int j = i + i; j <= x; j += i) {
        d[j] = 0;
      }
    }
  }
  long long s = 0;
  v.resize(x + 1);
  v[0] = 0, v[1] = 0;
  for (int i = 2; i <= x; ++i) {
    if (d[i] == 1) {
      v[i] += v[i - 1] + i;
      s += i;
    } else {
      v[i] = v[i - 1];
    }
  }
}

auto Solve() -> void {
  int x;
  cin >> x;
  cout << v[x] << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  Calculate();
  while (t--)
    Solve();
  return 0;
}
