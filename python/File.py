#!/usr/bin/python
#coding=utf-8
fo = open("dir/test.txt", "wb")
#返回文件的名称
print "Name of the file: ", fo.name
#返回true如果文件已被关闭，否则返回false
print "Closed or not : ", fo.closed
#返回被打开文件的访问模式
print "Opening mode : ", fo.mode
#如果用print输出后，必须跟一个空格符，则返回false。否则返回true。
print "Softspace flag : ", fo.softspace

