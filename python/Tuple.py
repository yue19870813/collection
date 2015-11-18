#!/usr/bin/python
#coding=utf-8
tuple1 = ("test1", 100, 99.9, 'test2')
tuple2 = ("test3", "test4")
tuple3 = ("test5", tuple1, tuple2)

print tuple1         #打印元组list1
print tuple1[0]      #打印元组第一个元素
print tuple1[2]      #打印元组第三个元素
print tuple1[1:3]    #打印元组中第二个到第四个元素
print tuple1[2:]     #打印元组中从第三个开始的元素
print tuple2 * 2     #打印元组两遍
print tuple1 + tuple2#元组拼接
print tuple3;        #打印元组list3， list3中包含其他元组