#!/usr/bin/env python

# https://projecteuler.net/problem=5

# Smallest Multiple


import math


def main():
    t = int(input().strip())
    for _ in range(t):
        n = int(input().strip())
        result = 1
        for x in range(2, n + 1):
            result = math.lcm(result, x)
        print(result)


if __name__ == '__main__':
    main()
