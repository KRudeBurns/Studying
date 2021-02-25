#this is a function that treats like argv
# *args tells python to take the argument and add them to the list args
def print_two(*args):
    arg1, arg2 = args
    print(f"arg1: {arg1}, arg2: {arg2}")

#an alternative is this
def print_two_again(arg1, arg2):
    print(f"arg1: {arg1}, arg2: {arg2}")

#this one takes one argument
def print_one(arg1):
    print( f"arg1: {arg1}")

def print_three(*vsx):
    vsx1, vsx2, vsx3 = vsx
    print(f"vsx1: {vsx1}, vsx2: {vsx2}, vsx3: {vsx3}")

#this one takes no argument
def print_none():
    print("I got nothing bro")


print_two("Kufre", "Abia")
print_two_again("K.R", "Burns")
print_one("Kufre")
print_three("Kufre", "Richard", "Abia")
print_none()
