from sys import argv
from os.path import exists

script, from_file, to_file = argv

print(f"Copying from {from_file} to {to_file}")

#this method takes the two lines and makes it one.
indata  = (open(from_file)).read()


#the rejected two lines were
#infile = open(from_file)
#indata = infile.read()
#reduction to 1 line -> indata = (open(from_file)).read()


#prints the lenght of the file
print(f"The input file is {len(indata)} bytes long")

#checks if the file exists using exist(filename)
print(f"Does the output file exist? {exists(to_file)}")
print("Ready, hit RETURN to continue, Ctrl-C to abort")
input()

out_file = open(to_file,'w') #will create a new file if not existing/truncate existing file
out_file.write(indata)

print("Alright, all done")

out_file.close()


#print in file
out_file = open(to_file).read()
print(out_file)
