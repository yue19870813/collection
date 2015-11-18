#!/usr/bin/python
#coding=utf-8
fo = open("dir/test.txt", "r+")
#读取10个字节
str = fo.read(10)
print str

postion = fo.tell()
print "Curr file postion", postion

fo.seek(1, 1)
str = fo.read(10)
print str

#记得关闭
fo.close()

