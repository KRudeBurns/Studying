from sys import argv

script, input_file = argv

#function prints all the contents of the file f it just read
def print_all(f):
    print(f.read())

#function rewinds to the start point of the file (0)
def rewind(f):
    print(f.seek(0))

#function takes the line number, and file name 
#and prints contents of the line
def print_a_line(line_count, f):
    print(line_count, f.readline())

#specific file current_file
current_file = open(input_file)

print("First let's print the whole file:\n")

print_all(current_file)

print("Now let's rewind. Kind of like a tape.")

rewind(current_file)

print("Let's print three lines: ")

current_line = 1
print_a_line(current_line, current_file)

current_line += 1
print_a_line(current_line, current_file)

current_line += 1
print_a_line(current_line, current_file)


