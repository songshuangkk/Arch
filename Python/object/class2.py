class Student(object):
	"""docstring for Student"""
	def __init__(self, name):
		super(Student, self).__init__()
		self.name = name
	def self_age(self, age):
		self.age = age
	def self_major(self, major):
		self.major = major


class MasterStudent(Student):
	internship = 'mandatory, from to songshuang'
		

anna = Student('songshang')
anna.self_age(20)
anna.self_major('physice')

james = MasterStudent('james')
james.self_major('math')
james.self_age(23)
print(james.internship)
print(james.age)