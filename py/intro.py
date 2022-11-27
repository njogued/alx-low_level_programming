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
dig1i = int(dig1)
dig2i = int(dig2)
print(_sum(dig1i, dig2i))
sm4 = _sum(dig1i, dig2i)
def smIF(sm3):
	if sm3 < 10:
		print("Single Digit")
	elif sm3 < 100 & sm3 >= 10:
		print("Double Digit")
	else:
		print("More than two digits")
smIF(sm4)
