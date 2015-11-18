#!/usr/bin/python
#coding=utf-8
for s in "Python":
	print "当前字符：", s

list = ["test", 1, 99.9]
for l in list:
	print "当前元素：", l

fruits = ['banana', 'apple',  'mango']
for index in range(len(fruits)):
	print "当前下标：", index
	print "当前水果：", fruits[index]

for num in range(10, 20):
	print "Num is",num
else:
	print "Over"
