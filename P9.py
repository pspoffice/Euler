#!/usr/bin/env python

# https://projecteuler.net/problem=9

# a + b + c = n
# c = n - a - b
# pow(a, 2) + pow(b, 2) = pow(c, 2)
# pow(a - b - c, 2) = pow(a, 2) + pow(b, 2) + pow(c, 2) - 2(ab - bc + ca)

def main():
    t = int(input().strip())
    for _ in range(t):
        d = -1
        n = int(input().strip())
        for a in range(3, (n // 3) + 1):
            b = ((2 * a * n) - (n ** 2))
            b //= ((2 * a) - (2 * n))
            c = n - a - b
            if a ** 2 + b ** 2 == c ** 2:
                d = max(d, a * b * c)
        print(d)


if __name__ == '__main__':
    main()
