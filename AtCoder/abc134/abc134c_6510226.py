# coding: utf-8
# submission #6510226 - User: herp_sy
# https://atcoder.jp/contests/abc134/submissions/6510226

import math
import statistics

# qsort(array[])
def qsort(seq):
	if len(seq) < 1:
		return seq
	pivot = seq[0]
	left = []
	right = []
	for x in range(1, len(seq)):
		if seq[x] <= pivot:
			left.append(seq[x])
		else:
			right.append(seq[x])
	left = qsort(left)
	right = qsort(right)
	foo = [pivot]
	return (left + foo + right)

# , = map(int, input.split())
n = int(input())
#  = raw_input().split()
#  = list(int(i) for i in input().split())  
a = []

for i in range(n):
  num = int(input())
  a.append(num)

sla = sorted(a)
for i in range(n):
	if a[i] == sla[-1]:
		print(sla[-2])
	else:
		print(sla[-1])
