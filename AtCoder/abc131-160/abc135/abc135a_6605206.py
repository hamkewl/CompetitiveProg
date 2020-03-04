# coding: utf-8
# submission #6605206 - User: herp_sy
# https://atcoder.jp/contests/abc135/submissions/6605206

import math
import statistics

a,b = map(int, input().split())

k = (a + b) // 2;
if abs(k - a) == abs(k - b):
  print(k)
else:
  print("IMPOSSIBLE")
