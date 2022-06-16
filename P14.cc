// Priyank S Patel

// Longest Collatz Sequence

// https://projecteuler.net/problem=14

#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int n;

auto Input() -> void { cin >> n; }

auto Solve() -> void {
  Input();
  int a = 0;
  int count = 0;
  for (int i = n; i >= n / 2 + 1; --i) {
    long long x = i;
    int c = 1;
    while (x > 1) {
      c += 1;
      if (x & 1) {
        x = 3 * x + 1;
      } else {
        x /= 2;
      }
    }
    if (c > count) {
      a = i;
      count = c;
    }
  }
  cout << a << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
