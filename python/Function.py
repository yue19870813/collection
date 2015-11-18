#!/usr/bin/python
#coding=utf-8
def echo (str):
	print str
	return

def echo_num (num):
	num += 1
	print num
	return

echo("Hello World!")

test_num = 9
echo_num(test_num)
print test_num

#命名参数
def name_function (name, age):
	print "name is", name
	print "age is", age

#必备参数调用方式
name_function("joy", 24)
#命名参数调用方式
name_function(age = 28, name = "Tom")

#缺省参数
def def_function (name, age = 25): #age设置了默认值
	print "name is", name
	print "age is", age
#必备参数调用方式
def_function("Joy", 24)
#缺省调用
def_function("Jim")

#不定长参数
def printinfo( arg1, *vartuple ):
	"打印任何传入的参数"
	print "输出: "
	print arg1
	for var in vartuple:
		print var
	return;
 
#调用printinfo 函数
printinfo( 10 );
printinfo( 70, 60, 50 );

#变量作用域
total = 0; # 这是一个全局变量
#可写函数说明
def sum( arg1, arg2 ):
	#返回2个参数的和."
	total = arg1 + arg2; # total在这里是局部变量.
	print "函数内是局部变量 : ", total
	return total;
 
#调用sum函数
sum( 10, 20 );
print "函数外是全局变量 : ", total