from sys import argv
from os.path import exists

script, from_file, to_file = argv

#open to_file in write mode
#write contents of from_file to the to_file
open(to_file,'w').write(open(from_file).read())

#print the contents of the to_file to check
print(open(to_file).read())
