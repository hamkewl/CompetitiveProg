# https://atcoder.jp/contests/abc120/submissions/4463422

a,b,c = map(int, input().split()) 
if(b / a <= c):
	print(int(b / a))
else:
	print(c)
