#import the system library
from sys import argv

#set the values to argv
script, input_encoding, error = argv

#defining a function called main
def main(language_file, encoding, errors):
    line = language_file.readline() #read a line from the file, and assign to line
    if line: #if the line is not empty
        print_line(line, encoding, errors) #print the line with the endcoding and errors
        return main(language_file, encoding, errors) #this is recursive, so it will repeat itself

#defining the fxn called print_line 
def print_line(line, encoding, errors): 
    next_lang = line.strip() #strip() removes any spaces at beginning and end of the characters in the line
    #Encode returns an encoded version of a string
    raw_bytes = next_lang.encode(encoding, errors = errors)
    #decode returns a decoded version of a string  
    cooked_string = raw_bytes.decode(encoding, errors = errors)
    #prints the raw_bytes - the encoded version to its translation
    print(raw_bytes, "<===>", cooked_string)
#end of fxn definition

#languages is the variable that contains the contents of languages.txt that is forced to UTF-8 format
languages = open("languages.txt", encoding= "UTF-8") 

#calling function main
main(languages, input_encoding, error)
