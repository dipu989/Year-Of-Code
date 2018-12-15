t = int(input())
for i in range(t):
	num = int(input())
	num = str(num)
	if num[::-1] == num:
		print("wins")
	else:
		print("losses")
