#!/usr/bin/python2
#-*-coding:utf8-*-

try:
	x = int(raw_input('Please enter a numer:'))
except ValueError:
	print('ValueError')	
else:
	print(x)
finally:
	print('finally')