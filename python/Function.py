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

#��������
def name_function (name, age):
	print "name is", name
	print "age is", age

#�ر��������÷�ʽ
name_function("joy", 24)
#�����������÷�ʽ
name_function(age = 28, name = "Tom")

#ȱʡ����
def def_function (name, age = 25): #age������Ĭ��ֵ
	print "name is", name
	print "age is", age
#�ر��������÷�ʽ
def_function("Joy", 24)
#ȱʡ����
def_function("Jim")

#����������
def printinfo( arg1, *vartuple ):
	"��ӡ�κδ���Ĳ���"
	print "���: "
	print arg1
	for var in vartuple:
		print var
	return;
 
#����printinfo ����
printinfo( 10 );
printinfo( 70, 60, 50 );

#����������
total = 0; # ����һ��ȫ�ֱ���
#��д����˵��
def sum( arg1, arg2 ):
	#����2�������ĺ�."
	total = arg1 + arg2; # total�������Ǿֲ�����.
	print "�������Ǿֲ����� : ", total
	return total;
 
#����sum����
sum( 10, 20 );
print "��������ȫ�ֱ��� : ", total