#!/usr/bin/env python

# https://projecteuler.net/problem=4

# Largest Palindrome Product


def calc():
    arr = list()
    for a in range(100, 1000):
        for b in range(100, 1000):
            x = str(a * b)
            q, r = x[:3], x[3:]
            r = r[::-1]
            x = int(x)
            if q == r and x not in arr:
                arr.append(x)
    arr.sort()
    return arr


def main():
    t = int(input().strip())
    arr = calc()
    arr.reverse()
    for _ in range(t):
        n = int(input().strip())
        for x in arr:
            if x < n:
                print(x)
                break


if __name__ == '__main__':
    main()
