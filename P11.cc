// https://projecteuler.net/problem=11

#include <deque>
#include <iostream>
#include <vector>
using namespace std;

auto Check(const int i, const int j) -> deque<bool> {
  deque<bool> d;
  d.resize(8, 0);
  // RIGHT
  if (j + 3 < 20) {
    d[0] = 1;
  }
  // DOWN
  if (i + 3 < 20) {
    d[1] = 1;
  }
  // LEFT
  if (j - 3 >= 0) {
    d[2] = 1;
  }
  // UP
  if (i - 3 >= 0) {
    d[3] = 1;
  }
  // TOP RIGHT
  if (d[3] and d[0]) {
    d[4] = 1;
  }
  // TOP LEFT
  if (d[3] and d[2]) {
    d[5] = 1;
  }
  // BOTTOM LEFT
  if (d[1] and d[2]) {
    d[6] = 1;
  }
  // BOTTOM RIGHT
  if (d[1] and d[0]) {
    d[7] = 1;
  }
  return d;
}

auto main() -> int {
  const int x = 20;
  vector<vector<int>> grid(x, vector<int>(20));
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      cin >> grid[i][j];
    }
  }
  long long product = 0;
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      const auto d = Check(i, j);
      if (d[0]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i][j + k];
        }
        product = max(product, t);
      }
      if (d[1]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i + k][j];
        }
        product = max(product, t);
      }
      if (d[2]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i][j - k];
        }
        product = max(product, t);
      }
      if (d[3]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i - k][j];
        }
        product = max(product, t);
      }
      if (d[4]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i - k][j + k];
        }
        product = max(product, t);
      }
      if (d[5]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i - k][j - k];
        }
        product = max(product, t);
      }
      if (d[6]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i + k][j - k];
        }
        product = max(product, t);
      }
      if (d[7]) {
        long long t = 1;
        for (int k = 0; k < 4; ++k) {
          t *= grid[i + k][j + k];
        }
        product = max(product, t);
      }
    }
  }
  cout << product << '\n';
  return 0;
}
