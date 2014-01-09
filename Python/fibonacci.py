#!/bin/python

u_0 = 1;
u_1 = 1;
def fib(n):
	if n==2 or n==1:
		return 1
	return fib(n-1) + fib(n-2)

print (fib(6))