from sys import argv

script, filename = argv

print(f"We are going to erase {filename}")
print("If you don't want that, hit Ctrl-C (^C)")
print("If you want to proceed, hit RETURN or ENTER")

input (">>>")

#opening a file has in write mode, w;
#if I use w, it opens the file in write mode,
#if I use w, it creats the file if it doesnt exist
#if I use w, it truncates the file if it exists
#the + it opens in read/write mode

print ("Opening the file...")
target = open(filename, 'r+')


print("Truncating the file. Goodbye")
target.truncate()

print("Now I am going to ask you for three lines")

line1 = input("Line 1 >>")
line2 = input("Line 2 >>")
line3 = input("Line 3 >>")

print("I'm going to write these to the file")

target.write(line1)
target.write("\n")
target.write(line2)
target.write("\n")
target.write(line3)
target.write("\n")

print("And finally, we close it.")
target.close()

print("Now we will reopen it and print the contents")
target = open(filename)
contents = target.read()
print(contents)
