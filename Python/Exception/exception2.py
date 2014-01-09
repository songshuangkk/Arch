#!/usr/python
#-*-coding:utf8-*-

def filter_name(name):
	try:
		name = name.encode('ascii')
	except UnicodeError, e:
		if name == 'Gaël':
			print('OK,Gael')
		else:
			raise e

	return name


filter_name('Stéfan')