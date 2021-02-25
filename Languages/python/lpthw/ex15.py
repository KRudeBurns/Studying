#from the system module, import the argv variable
#argv holds the list of all the arguments passed to the command line
#even if you do not pass any arguments, argv always holds at least on element, the script name.
from sys import argv

#the arguments to be passed to the argv variable, ie. the command line will be 
#the script name and the filename.
#the script name is already the name of the file when running the python command
#the filename is the name of the file I will be requesting to be opened.
script, filename = argv

#txt is a variable that  contains the content of the opened file. 
#open(filename) -> the open command opens the file
txt = open(filename)

print(f"Here is your file {filename}")

#since txt already contains the contents of filename, print command just reveals it
print(txt.read())


#file again will read the user input
#the ">" will be the cursor displayed
print("Type the filename again:")
file_again = input(">")


#txt_again is similar to txt. It contains the contents of the file
#txt_again.open() will print out the contents of the file.
txt_again = open(file_again)
print(txt_again.read())
