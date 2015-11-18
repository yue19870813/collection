#!/usr/bin/python
#coding=utf-8
class FirstClass:

	objCount = 0
	
	def __init__(self, name, age):
		self.name = name
		self.age = age
	
	def setAge(self, age):
		self.age = age
	
	def getName(self):
		return self.name
		
	def getAge(self):
		return self.age
	
	def __del__(self):
		print self.name, "destroyed"

obj1 = FirstClass("Joy", 28)
obj2 = FirstClass("Jim", 22)

print "Obj1'S name", obj1.getName(), "age", obj1.getAge()
print "Obj2'S name", obj2.getName(), "age", obj2.getAge()

print "\nTo update obj1's age to 35"
obj1.setAge(35);
print "Obj1's age", obj1.getAge()

print "\nTo add a sex to obj2"
setattr(obj2, "sex", "male")
print "Obj2's sex is", obj2.sex, "\n"


