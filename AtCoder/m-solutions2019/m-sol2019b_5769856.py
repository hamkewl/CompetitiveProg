# coding: utf-8
# submission #5769856 - User: herp_sy
# https://atcoder.jp/contests/m-solutions2019/submissions/5769856

import math
import statistics

win = 0
lose = 0
s = input()
for i in range(len(s)):
  if s[i] == 'o':
    win = win + 1
  else:
    lose = lose + 1
if(win + (15 - len(s)) >= 8):
  print('YES')
else:
  print('NO')
