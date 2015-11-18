#!/usr/bin/python
#coding=utf-8
#定义一个字典
dict = {}
#为字典赋值
dict['key'] = "This is key."
dict[2] = "This is NO.2.";

testDict = {'name':'Joy', 'age':24, 'sex':'male'}

print dict['key'] #输出字典中key值为key的值。
print dict[2]     #输出字典中key值为2的值。
print testDict    #打印字典
print testDict.keys()  #打印字典的所有key
print testDict.values()#打印字典的所有value
#修改字典中的内容
testDict['age'] = 28;
print testDict['age']