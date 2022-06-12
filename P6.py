#!/usr/bin/env python

# https://projecteuler.net/problem=6

# Sum Square Difference

def main():
    t = int(input().strip())
    for _ in range(t):
        x = int(input().strip())
        s = x * (x + 1)
        s //= 2
        s **= 2
        p = x * (x + 1) * ((2 * x) + 1)
        p //= 6
        print(s - p)


if __name__ == '__main__':
    main()
