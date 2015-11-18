#!/usr/bin/python
#coding=utf-8
class Father:
	def __init__(self, name):
		self.fName = name
		self.fMoney = 10000
	
	def getMoney(self):
		return self.fMoney
	
	def __del__(self):
		print self.fName, "destroyed"

class Mum:
	def __init__(self, name):
		self.mName = name
		self.mMoney = 8888
	
	def getMoney(self):
		return self.mMoney
	
	def talent(self):
		print "Mum's talent"
	
	def __del__(self):
		print self.mName, "destroyed"

class ChildOne(Father):
	def __init__(self, fName, name):
		Father.__init__(self, fName)
		self.name = name
		self.money = 0
	
	def addMoney(self, money):
		self.money += money
	
	def talent(self):
		print "ChildOne's talent"
	
	def getMoney(self):
		return self.money + Father.getMoney(self)
		
	def getFatherMoney(self):
		return Father.getMoney(self)
		
	def __del__(self):
		#Father.__del__(self) #加上报错 Why?
		print self.name, "destroyed"

class childTow(Father, Mum):
	def __init__(self, fName, mName, name):
		Father.__init__(self, fName)
		Mum.__init__(self, mName)
		self.name = name
		self.money = 0
	def getFatherMoney(self):
		return Father.getMoney(self)
	
	def getMoney(self):
		return self.money + Father.getMoney(self) + Mum.getMoney(self)
	
	def getMumMoney(self):
		return Mum.getMoney(self)
		
	def __del__(self):
		Father.__del__(self)
		Mum.__del__(self)
		print self.name, "destroyed"

childOne = ChildOne("Oli", "Joy")
print childOne.fName, "has", childOne.getFatherMoney(), "money"
childOne.addMoney(999)
print childOne.name, "has", childOne.getMoney(), "money"

childTow = childTow("Oli", "Lourel", "Tim")
print childTow.mName, "has", childTow.getMumMoney(), "money"
print childTow.name, "has", childTow.getMoney(), "money"

childOne.talent()
childTow.talent()

