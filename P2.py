#!/usr/bin/env python

# https://projecteuler.net/problem=2

# 008 = 2 * 4 + 0
# 034 = 8 * 4 + 2
# 144 = 8 * 4 + 8

def solve():
    n = int(input().strip())
    answer = 0
    a, b, c = 2, 0, 0
    while c <= n:
        answer += a
        c = a * 4 + b
        a, b = c, a
    print(answer)


def main():
    t = int(input().strip())
    for _ in range(t):
        solve()


if __name__ == '__main__':
    main()
