#!/usr/bin/python
#coding=utf-8
import os
import json

inputDir = "input"
outputDir = "output"

def execute(filename):
	print "execute", filename
	file = open(inputDir + "/" + filename, "rb")
	content = file.read()
	obj = json.loads(content)
	list = obj['Content']['Content']['Animation']['Timelines']
	
	for o in list:
		frames = o['Frames']
		for frame in frames:
			if frame.has_key('Value') and frame['Value'] == "":
				del frame
	
	result = json.dumps(obj)
	
	fo = open(outputDir + "/" + filename, "wb")
	fo.write(result)
	
	
def run():
	for parent,dirnames,filenames in os.walk(inputDir):
		for filename in filenames:
			execute(filename)

#程序入口
run()


