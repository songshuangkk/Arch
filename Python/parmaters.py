#!/bin/python

def variable_args(*args, **kwargs):
	print ('args is ', args)
	print ('kwargs is ' ,kwargs)


variable_args('one', 'two', {'three':3}, x=1, y=2)

va = variable_args

va('three', 4, z=4)
print (type(va))
