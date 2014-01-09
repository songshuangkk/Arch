#!/usr/python
#-*-coding:utf8-*-

def achilles_arrow(x):
	if abs(x-1) < 1e-3:
		raise StopIteration
	x = 1-(1-x)/2
	return x

x = 0
while True:
	try:
		x = achilles_arrow(x)
	except StopIteration	:
		break