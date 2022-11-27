#!/bin/python

print("Hello world")
a = 5
print("Hello World", a)
print("\"Hello World!\"\n" * 5)
print("The value of a is: ", a)
names = ["Name1", "Name2", "Name3"]
print(names)
print(names[-2:])
def _sum(i, j):
	sm = i + j
	return(sm)
print("Enter two digits")
dig1 = input("Digit 1: ")
dig2 = input("Digit 2: ")
print(_sum(dig1, dig2))
sm3 = _sum(dig1, dig2)
def smIF(sm3):
	if sm3 < 10:
		print("Single Digit")
	elif sm3 < 100 & sm3 >= 10:
		print("Double Digit")
	else:
		print("More than two digits")
my_range1 = range(1, 9)
my_range2 = range(10, 100)
for sm3 in my_range1:
	print(sm3)
for sm3 in my_range2:
	print(sm3)
