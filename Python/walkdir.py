import os
"""
for dirpath, dirnames, filenames in os.walk(os.curdir):
	for fp in filenames:
		#print (os.path.abspath(fp))
"""

for dirnames ,dirpath, filenames in os.walk(os.curdir):
	print ('dirpath = %s'%dirpath)
	print ('dirnames = %s'%dirnames)
	for fp in filenames:
		print (os.path.abspath(fp))
