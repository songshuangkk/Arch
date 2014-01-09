
class Student(object):
	"""docstring for Student"""
	def __init__(self, name):
		self.name = name
	def set_age(self, age):
		self.age = age
	def set_major(self, major):
		self.major = major;

anna = Student('anna')
anna.set_age(21)
anna.set_major('physics')

print(anna.age)
		