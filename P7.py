#!/usr/bin/env python

# https://projecteuler.net/problem=7

# Prime

from typing import List


def calc() -> List[int]:
    v = list()
    a = [False] * 1000000
    for x in range(2, 1000000):
        if len(v) > 10000:
            break
        if not a[x]:
            v.append(x)
            for index in range(x, 1000000, x):
                a[index] = True
    return v


def main():
    a = calc()
    t = int(input().strip())
    for _ in range(t):
        x = int(input().strip())
        x -= 1
        print(a[x])


if __name__ == '__main__':
    main()
