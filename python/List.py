#!/usr/bin/python
#coding=utf-8
list1 = ["test1", 100, 99.9, 'test2']
list2 = ["test3", "test4"]
list3 = ["test5", list1, list2]

print list1         #打印列表list1
print list1[0]      #打印列表第一个元素
print list1[2]      #打印列表第三个元素
print list1[1:3]    #打印列表中第二个到第四个元素
print list1[2:]     #打印列表中从第三个开始的元素
print list2 * 2     #打印列表两遍
print list1 + list2 #列表拼接
print list3;        #打印列表list3， list3中包含其他列表