// Priyank S Patel

// Large Sum

// https://projecteuler.net/problem=13

#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int q;
vector<string> v;

auto Input() -> void {
  cin >> q;
  v.resize(q);
  for (int i = 0; i < q; ++i) {
    cin >> v[i];
  }
}

auto Solve() -> void {
  Input();
  int c = 0;
  deque<int> result;
  for (int i = 49; i >= 0; --i) {
    int a = 0;
    for (int j = 0; j < q; ++j) {
      a += (v[j][i] - '0');
    }
    a += c;
    c = a / 10;
    int d = a % 10;
    result.push_front(d);
  }
  // Check
  if (c) {
    result.push_front(c);
  }
  // Output
  string out;
  for (int i = 0; i < 10; ++i) {
    out += to_string(result[i]);
  }
  for (int i = 0; i < 10; ++i) {
    cout << out[i];
  }
  cout << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
