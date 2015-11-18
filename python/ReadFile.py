#!/usr/bin/python
#coding=utf-8
fo = open("dir/test.txt", "r+")
str = fo.read()
print str
#记得关闭
fo.close()

