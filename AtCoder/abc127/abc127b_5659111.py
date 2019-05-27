# https://atcoder.jp/contests/abc127/submissions/5659111
# ---------------------------------------------------------
# coding: utf-8
# user: herp_sy

import math
import statistics

x = []
r,d,xs = map(int, input().split())
x.append(xs)
for i in range(0,10):
  x.append(r * x[i] - d)  
  print(x[i + 1])

