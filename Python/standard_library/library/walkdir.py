import os

for dirpath, dirnames, filenames in os.walk(os.curdir):
	for fp in filenames:
		print (os.path.abspath(fp))


for dirpath, dirname,filenames in os.walk(os.curdir):
	print (dirpath)
	print (dirname)
	print (filenames)