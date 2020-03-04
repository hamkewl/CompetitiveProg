# coding: utf-8
# submission #6605288 - User: herp_sy
# https://atcoder.jp/contests/abc135/submissions/6605288

import math
import numpy as np
import statistics

# = map(int, input().split())
n = int(input())
# = raw_input().split()
p = list(int(i) for i in input().split())

cnt = 0
l = np.arange(n) + 1
for i in range (n):
  if not(p[i] == l[i]):
    cnt += 1
if(cnt in [0,2]):
  print('YES')
else:
  print('NO')
