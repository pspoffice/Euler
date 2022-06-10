#!/usr/bin/env python

# https://projecteuler.net/problem=3

# Largest Prime Factor


def main():
    t = int(input().strip())
    for _ in range(t):
        n = int(input().strip())
        d, p = 2, 2
        while d * d <= n:
            while n % d == 0:
                p = d
                n //= d
            d += 1
        if n > p:
            p = n
        print(p)


if __name__ == '__main__':
    main()
