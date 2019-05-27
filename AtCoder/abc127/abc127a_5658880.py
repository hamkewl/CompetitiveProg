# https://atcoder.jp/contests/abc127/submissions/5658880
# ---------------------------------------------------------
# coding: utf-8
# user: herp_sy

import math
import statistics

a,b = map(int, input().split())
if a <= 5:
  print('0')
elif a >= 13:
  print(b)
else:
  print(b // 2)

