#!/usr/bin/python
#coding=utf-8
count = 9;

while count > 0:
	print "The count is : ", count;
	count -= 1;
print "done"

#break 与 continue的使用
i = 1
while i < 10:
	i += 1
	if i%2 > 0:
		continue
	print i

i = 1
while 1:
	print i
	i += 1
	if i > 10:
		break

#循环中使用else
count = 0
while count < 5:
	print count, "is less than 5."
	count += 1
else:
	print count, "is not less than 5."
