from __future__ import print_function
import re

'''CamelCase -> CamelCase
m_fieldOfView -> Field Of View
'''
def CamelCaseToReadable(string):
	# http://stackoverflow.com/questions/1175208/elegant-python-function-to-convert-camelcase-to-snake-case
	if string.startswith('m_'):
		string = string[2:]
	if string[0].islower():
		string = string[0].upper() + string[1:]
	return re.sub('((?<=[a-z0-9])[A-Z]|(?!^)[A-Z](?=[a-z]))', r' \1', string)

def unittest_CamelCaseToReadable():
	for s in ("m_fieldOfView", "CamelCase", "Camel2Camel2Case", "getHTTPResponseCode", "get2HTTPResponse123Code", "HTTPResponseCodeXYZ"):
		print(s,'==>', CamelCaseToReadable(s))

if __name__ == "__main__":
	unittest_CamelCaseToReadable()