#!/usr/bin/env python

# https://projecteuler.net/problem=8

from functools import reduce
from operator import mul


# Brute Force

def main():
    t = int(input().strip())
    for _ in range(t):
        n, k = map(int, input().strip().split())
        x = input().strip()
        x = list(map(int, x))
        v = 0
        for index in range(n):
            vector = x[index: index + k]
            if len(vector) != k:
                break
            v = max(v, reduce(mul, vector))
        print(v)


if __name__ == '__main__':
    main()
